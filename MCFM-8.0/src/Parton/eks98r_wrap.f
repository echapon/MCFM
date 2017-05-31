c
c	LAZY WAY OF INCLUDING EPS09/DSSZ IN THE CALCULATION
c	BY JUST SUBSTITUTING EKS98 BY A CALL TO EPS09/DSSZ (rates)
c	nPDFset file should be placed in the working directory
c	to input order, pset and A
c
      double precision function eks98r(x,q,a,kpt)
      implicit double precision (a-h,o-z)
      double precision f2a,f2p,f2n,uva,dva,uba,dba,sa,ca,ba,ga,
     1 uv,dv,ub,db,s,c,b,g
      dimension qpdf(10)
      double precision estar(-6:6),ncteq(-6:6)
      integer :: iwrp = -10
      character*72 filename,checkpath,filename2,filename3
      Integer :: Aw, openchannelw, orderw, psetw, inidssz,choosew
      save iwrp
      integer repnum
      COMMON / INITNPDF / INIDSSZ
c      common/piasnumber/repnum
            
      if(iwrp.eq.-10) then
        Call NextUnitCarlos(openchannelw)
        filename=checkpath('nPDFset')
c        filename2=checkpath('input-pia.dat')
        OPEN (openchannelw, file = filename, status='OLD', IOSTAT=iovar)
c       open(unit=21,file=filename2)
        If (iovar .NE. 0) Then
          Write(*,*) 'Missing file: ',filename
          stop
        End If
        read(openchannelw,*) choosew
        read(openchannelw,*) orderw
        read(openchannelw,*) psetw
        read(openchannelw,*) Aw
c        read(21,*) filename3
c        read(21,*) repnum
        if (choosew.eq.1) then
        print*, ' DSSZ with', orderw, psetw, Aw, INIDSSZ
        else if (choosew.eq.2) then
        print*, ' nCTEQ with', orderw, psetw, Aw
        else
        print*, ' EPS09 with', orderw, psetw, Aw
        endif
        iwrp=10
       endif
c       repnum=$3

        if (choosew.eq.1) then
        call DSSZratiose(X,Q,Aw,psetw,qpdf(1),qpdf(2),qpdf(3),qpdf(4),
     .           qpdf(5),qpdf(6),qpdf(7),qpdf(8))
        else if (choosew.eq.0) then
        call EPS09(orderw,psetw,Aw,x,q,qpdf(1),qpdf(2),qpdf(3),
     .      qpdf(4),qpdf(5),qpdf(6),qpdf(7),qpdf(8))
        else

        call evolvePDFm(2,x,q,estar)
        call evolvePDFm(3,x,q,ncteq)
        qpdf(8)=ncteq(0)/estar(0)
        qpdf(1)=(ncteq(2)-ncteq(-2))/(estar(2)-estar(-2))
        qpdf(2)=(ncteq(1)-ncteq(-1))/(estar(1)-estar(-1))
        qpdf(3)=ncteq(-2)/estar(-2)
        qpdf(4)=ncteq(-1)/estar(-1)
        qpdf(5)=ncteq(3)/estar(3)
        qpdf(6)=ncteq(4)/estar(4)
        qpdf(7)=ncteq(5)/estar(5)
        endif
c       endif

      qpdf(9)=qpdf(8)
      
      eks98r=qpdf(kpt)
    
c        write(6,*) aw
c        stop
      return
      end

! **********************
! Find the open I/O unit
! **********************

c       COPIED FROM HANNU - EPS09

      Subroutine NextUnitCarlos(firstopen)

      Logical EX
      Integer firstopen, N

      Do 10 N = 10, 300
         INQUIRE (UNIT=N, OPENED=EX)
         If (.NOT. EX) then
            firstopen = N
            Goto 20
        Endif
10    Continue
      Stop ' There is no available I/O unit. '
20    Continue
      End Subroutine NextUnitCarlos
      

