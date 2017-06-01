          SUBROUTINE DSSZratiose(X,Q,A,sete,RUV,RDV,RUB,RDB,RS,RC,RB,RG)
**************************************************************************
*
*       DSSZ NLO GLOBAL ABALYSIS OF NUCLEAR PARTON DISTRIBUTIONS                                                                     
*       D. de Florian, R. Sassot, M. Stratmann, P. Zurita                                          
*                             
*  REFERENCE:   arXiv:....
*
*  USAGE: modified version, only for using with MCFM
*                                               
*       The distributions are obtained by calling the subroutine                
*                                                                            
*               DSSZratiose(X,Q,A,sete,RUV,RDV,RUB,RDB,RS,RC,RB,RG)                       
*                                                                            
*  INPUT:                                                     
*            X= x_bjorken                                                    
*            Q= factorization scale                                          
*            A= atomic number  
*    
*  OUTPUT: the subroutine returns the NUCLEAR RATIOS
*                R_f(x,Q,A) = f_A(x,Q)/f_p(x,Q)
*          where f_A corresponds the pdf of a parton of flavour f in a proton 
*          of a nucleus A, and f_p is the corresponding pdf in the free proton. 
*
*                    RUV :    U VALENCE DISTRIBUTION                     
*                    RDV :    D VALENCE DISTRIBUTION                     
*                    RUB :    UBAR DISTRIBUTION                          
*                    RDB :    DBAR DISTRIBUTION                          
*                    RS  :    STR(=STRBAR) DISTRIBUTION
*                    RC  :    CHARM DISTRIBUTION 
*                    RB  :    BOTTOM DISTRIBUTION
*                    RG  :    GLUON DISTRIBUTION           
*              
*          The "nuclear ratio" in the neutron can be obtained by isospin symmetry,
*          i.e., RUV_proton=RDV_neutron, etc
*                                                                            
*  COMMON:  The main program or the calling routine has to have    
*           a common block  COMMON / INITNPDF / INIDSSZ , and the     
*           integer variable  INIDSSZ has always to be zero when    
*           DSSZ is called for the first time.                                      
*                   
*  RANGE OF VALIDITY OF THE INTERPOLATION:                              
*                           10^(-4) < X < 1.0                     
*                           1 < Q**2 < 10^4                    
*                           A = 9, 56, 197, 208      
*
*        INTEGER SETE sets the error eigen vector, 0=central value
*  IN CASE OF PROBLEMS, DOUBTS, ETC, PLEASE REPORT TO :                 
*           deflo@df.uba.ar                                                     
*           sassot@df.uba.ar     
*           marco@bnl.gov
*           pia@df.uba.ar
*                                                                            
**************************************************************************
      IMPLICIT DOUBLE PRECISION (A-H, O-Z)
c      implicit none
      integer nx, nq, narg, nna, XA(4),A,i,k,j, NA(3),sete
      double precision XUVF(49,23,4), XDVF(49,23,4),XUBF(49,23,4),
     1     XDBF(49,23,4), XSF(49,23,4),x,
     2     XCF(49,23,4), XBF(49,23,4), XGF(49,23,4)
      double precision QS(23), XB(49),q
      dimension ARRF(76) , XT(3)
      double precision ruv,rdv,rub,rdb,rb,rc,rg,rs,dsszfint
C---
      include 'npdf.f'
c      SAVE XUVF, XDVF, XUBF, XDBF, XSF, XCF, XBF, XGF, NA, ARRF
C---TABLE OF (X,Q2) SUPPORT POINTS 

      DATA XB / 1.0E-4, 1.4E-4, 2.0E-4, 3.0E-4, 4.5E-4, 6.7E-4,
     3     1.0E-3, 1.4E-3, 2.0E-3, 3.0E-3, 4.5E-3, 6.7E-3,
     4     0.01D0, 0.014D0, 0.02D0, 0.03D0, 0.045D0, 0.06D0, 0.08D0,
     5     0.1D0, 0.125D0, 0.15D0, 0.175D0, 0.2D0, 0.225D0, 0.25D0,
     6     0.3D0, 0.325D0, 0.35D0, 0.375D0, 0.4D0, 0.425D0, 0.45D0,
     7     0.475D0, 0.5D0, 0.525D0, 0.55D0, 0.575D0, 0.6D0,
     8     0.625D0, 0.65D0, 0.7D0, 0.75D0, 0.8D0, 0.85D0,
     9     0.90D0, 0.925D0, 0.95D0, 1.D0/


       DATA QS / 1.D0, 1.5D0, 2.D0, 3.D0, 4.5D0, 6.D0, 8.D0, 10.D0,
     1     15.D0, 20.D0, 30.D0, 45.d0, 60.D0, 80.D0, 100.D0,
     2     200.D0, 300.D0, 450.D0, 700.D0, 1000.D0,
     3     2500.D0, 6000.D0, 10000.D0/

     
C---SUPPORTED NUCLEI: Be, Fe, Au, Pb
      DATA XA/ 9, 56, 197, 208/

C---
     
      nx=49
      nq=23
      narg=3
      nna=4
      if(inidssz.ne.0) THEN
         goto 10
      ELSE
         if(sete.eq.1) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-central.grid',
     1            STATUS='unknown')
         elseif(sete.eq.2) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-01.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.3) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-02.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.4) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-03.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.5) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-04.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.6) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-05.grid',
     1            STATUS='unknown') 
         elseif(sete.eq.7) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-06.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.8) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-07.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.9) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-08.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.10) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-09.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.11) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-10.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.12) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-11.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.13) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-12.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.14) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-13.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.15) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-14.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.16) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-15.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.17) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-16.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.18) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-17.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.19) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-18.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.20) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-19.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.21) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-20.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.22) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-21.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.23) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-22.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.24) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-23.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.25) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-24.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.26) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-plus-25.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.27) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-01.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.28) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-02.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.29) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-03.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.30) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-04.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.31) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-05.grid',
     1            STATUS='unknown') 
         elseif(sete.eq.32) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-06.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.33) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-07.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.34) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-08.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.35) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-09.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.36) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-10.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.37) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-11.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.38) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-12.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.39) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-13.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.40) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-14.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.41) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-15.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.42) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-16.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.43) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-17.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.44) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-18.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.45) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-19.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.46) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-20.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.47) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-21.grid',
     1            STATUS='unknown')       
         elseif(sete.eq.48) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-22.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.49) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-23.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.50) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-24.grid',
     1            STATUS='unknown')   
         elseif(sete.eq.51) then
         OPEN(UNIT=88,FILE='Pdfdata/dssz-minus-25.grid',
     1            STATUS='unknown')   

         endif
      ENDIF
C---
      do i=1,NX
         ARRF(I) = XB(I)     
      enddo
      do j=1,NQ
         ARRF(J+NX) = DLOG(QS(J))     
      enddo
      do K=1,NNA
         ARRF(k+NX+NQ) = XA(k)*1.d0     
      enddo
C---
       NA(1)=NX
       NA(2)=NQ
       NA(3)=NNA
       do i=1,nx-1
          do j=1,nq
             do k=1,nna
                read(88,90) xuvf(i,j,k),xdvf(i,j,k),xubf(i,j,k),
     1               xdbf(i,j,k),xsf(i,j,k),
     2               xcf(i,j,k),xbf(i,j,k),xgf(i,j,k)
             enddo
          enddo
       enddo
       
         DO J=1,NQ
         DO K=1,NNA
            XUVF(NX,J,K)  = 2.D0
            XDVF(NX,J,K)  = 2.D0
            XUBF(NX,J,K) = 2.D0
            XDBF(NX,J,K) = 2.D0
            XSF(NX,J,K) = 2.D0
            XCF(NX,J,K) = 2.D0
            XBF(NX,J,K) = 2.D0
            XGF(NX,J,K) = 2.D0
         ENDDO
      ENDDO
       inidssz=1
       close(88)
 10    continue
C---
       xt(1)=x
       xt(2)=dlog(Q*Q)
       xt(3)=A*1.d0
       RUV = DSSZFINT(NARG,XT,NA,ARRF,XUVF) 
       RDV = DSSZFINT(NARG,XT,NA,ARRF,XDVF) 
       RUB = DSSZFINT(NARG,XT,NA,ARRF,XUBF) 
       RDB = DSSZFINT(NARG,XT,NA,ARRF,XDBF) 
       RS = DSSZFINT(NARG,XT,NA,ARRF,XSF)
       RC = DSSZFINT(NARG,XT,NA,ARRF,XCF)
       RB = DSSZFINT(NARG,XT,NA,ARRF,XBF)
       RG = DSSZFINT(NARG,XT,NA,ARRF,XGF)   
       
      if (A.eq.1.or.A.eq.2) then
        ruv = 1.0
        rdv = 1.0
        rub  = 1.0
        rdb  = 1.0
        rs  = 1.0
        rc  = 1.0
        rb  = 1.0
        rg  = 1.0
        return
      endif
       
       
  90   FORMAT (8(1PE15.7))
       END
C       
C      
      double precision FUNCTION DSSZFINT(NARG,ARG,NENT,ENT,TABLE)
*********************************************************************
*                                                                   *
*   THE INTERPOLATION ROUTINE (CERN LIBRARY ROUTINE E104)           *
*                                                                   *
*********************************************************************
      IMPLICIT DOUBLE PRECISION (A-H, O-Z)
      DIMENSION ARG(3),NENT(3),ENT(10),TABLE(10)
      DIMENSION D(5),NCOMB(5),IENT(5)
      KD=1
      M=1
      JA=1
         DO 5 I=1,NARG
      NCOMB(I)=1
      JB=JA-1+NENT(I)
         DO 2 J=JA,JB
      IF (ARG(I).LE.ENT(J)) GO TO 3
    2 CONTINUE
      J=JB
    3 IF (J.NE.JA) GO TO 4
      J=J+1
    4 JR=J-1
      D(I)=(ENT(J)-ARG(I))/(ENT(J)-ENT(JR))
      IENT(I)=J-JA
      KD=KD+IENT(I)*M
      M=M*NENT(I)
    5 JA=JB+1
      DSSZFINT=0.
   10 FAC=1.
      IADR=KD
      IFADR=1
         DO 15 I=1,NARG
      IF (NCOMB(I).EQ.0) GO TO 12
      FAC=FAC*(1.-D(I))
      GO TO 15
   12 FAC=FAC*D(I)
      IADR=IADR-IFADR
   15 IFADR=IFADR*NENT(I)
      DSSZFINT=DSSZFINT+FAC*TABLE(IADR)
      IL=NARG
   40 IF (NCOMB(IL).EQ.0) GO TO 80
      NCOMB(IL)=0
      IF (IL.EQ.NARG) GO TO 10
      IL=IL+1
         DO 50  K=IL,NARG
   50 NCOMB(K)=1
      GO TO 10
   80 IL=IL-1
      IF(IL.NE.0) GO TO 40
      RETURN
      END



