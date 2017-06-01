*****************
* LHAPDF version*
*****************
      subroutine fdist(ih_call,x,xmu,fx,ipdf)
      implicit none
      double precision fx(-5:5),x,xmu,fPDF(-6:6)
      integer Iprtn,ih,Irt,ih_call,ipdf
      include 'pdlabel.f'
      include 'vanillafiles.f'
      include 'npdf.f'
      double precision xZ,xA,eks98r,xmu_safe
      integer mode,iZ,iA
      logical first,nucleon
c--- extra variables for MSTW08 implementation
      character*72 prefix,checkpath
      double precision u_val,d_val,u_sea,d_sea,s_sea,s_seabar
      double precision c_sea,c_seabar,b_sea,b_seabar,gluon
      double precision str,sbar,chm,cbar,bot,bbar,photon
      data first/.true./
      save first
c---  ih1=+1 proton 
c---  ih1=-1 pbar 

c---  Extended 5/24/05 to calculate nucleon parton distributions
c---  for a nucleus of atomic number Z and mass A via:
C---   K.J. Eskola, V.J. Kolhinen and C.A. Salgado, 
C---   "The scale dependent nuclear effects in parton distributions for 
C---   practical applications", Eur. Phys. J. C9 (1999) 61,
C---   JYFL-8/98, US-FT/14-98, hep-ph/9807297.

      nucleon=.false.
      if     (ih_call .gt. 1000d0) then
c--- nucleon distribution functions
        ih=1
        nucleon=.true.
        iA=mod(ih_call,1000)
        iZ=(ih_call-iA)/1000
        xA=dfloat(iA)
        xZ=dfloat(iZ)
        if (first) then
        write(6,*)
        write(6,*)'******************* Nucleon beam *******************'
        write(6,*)'*                                                  *'
        write(6,76) iZ,iA
        write(6,*)'****************************************************'
        first=.false.
        endif
      elseif (abs(ih_call) .ne. 1) then
c--- error
        write(6,*) 'Input beam ih=',ih,' does not make sense!'
        stop
      else
c--- parton distribution functions
        ih=ih_call  
      endif


C---set to zero if x out of range
      if (x .ge. 1d0) then
          do Iprtn=-5,5
             fx(Iprtn)=0d0
          enddo
          return
      endif
!$omp critical(LHApdf) 
      call evolvePDFm(ipdf,x,xmu,fPDF)
!$omp end critical(LHApdf) 
      if (ih.eq.1) then
        do Iprtn=-5,5
          fx(+Iprtn)=fPDF(+Iprtn)/x
        enddo
      elseif(ih.eq.-1) then
        do Iprtn=-5,5
          fx(+Iprtn)=fPDF(-Iprtn)/x
        enddo
      endif

      if (nucleon) then
        xmu_safe=min(xmu,100d0)
        u_val=(fPDF(2)-fPDF(-2))*eks98r(x,xmu_safe,xA,1)/x
        d_val=(fPDF(1)-fPDF(-1))*eks98r(x,xmu_safe,xA,2)/x
        u_sea=fPDF(-2)*eks98r(x,xmu_safe,xA,3)/x
        d_sea=fPDF(-1)*eks98r(x,xmu_safe,xA,4)/x
        s_sea=fPDF(3)*eks98r(x,xmu_safe,xA,5)/x
        c_sea=fPDF(4)*eks98r(x,xmu_safe,xA,6)/x
        b_sea=fPDF(5)*eks98r(x,xmu_safe,xA,7)/x
        s_seabar=fPDF(-3)*eks98r(x,xmu_safe,xA,5)/x
        c_seabar=fPDF(-4)*eks98r(x,xmu_safe,xA,6)/x
        b_seabar=fPDF(-5)*eks98r(x,xmu_safe,xA,7)/x
        gluon=fPDF(0)*eks98r(x,xmu_safe,xA,8)/x
c--- write new nucleon distributions
        fx(1)=(xZ*(d_val+d_sea)+(xA-xZ)*(u_val+u_sea))/xA       
        fx(2)=(xZ*(u_val+u_sea)+(xA-xZ)*(d_val+d_sea))/xA       
        fx(-1)=(xZ*d_sea+(xA-xZ)*u_sea)/xA
        fx(-2)=(xZ*u_sea+(xA-xZ)*d_sea)/xA
        fx(-3)=s_sea
        fx(-4)=c_sea
        fx(-5)=b_sea
        fx(+3)=s_seabar
        fx(+4)=c_seabar
        fx(+5)=b_seabar
        fx(0)=gluon             
        endif           
   76 format('*(Atomic number,mass)=(Z,A)=(',i4,',',i4,')*')                  
      return
      end

  

