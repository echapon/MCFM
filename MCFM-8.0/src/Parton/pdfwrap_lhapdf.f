*****************
* LHAPDF version*
*****************
      subroutine pdfwrap
      implicit none
      include 'types.f'
      include 'masses.f'
      include 'lhapdf.f'
      include 'nlooprun.f'
      include 'PDFerrors.f'
      include 'pdlabel.f'
      include 'couple.f'
      double precision alphasPDF
      logical validPDF
      character*50 oldPDFname
      logical validPDF2
      character*50 oldPDFname2
      character*72 checkpath 
      integer i,iorder

      
c      if (newinput .eqv. .false.) then
c        open(unit=21,file='lhapdf.DAT',status='old',err=999)
c        call checkversion(21,'lhapdf.DAT')
c        read(21,*) PDFname
c        read(21,*) PDFmember            
c        close(21)
c      endif
      
      oldPDFname=PDFname
      validPDF=.false.
      PDFerrors=.false.
      i=0
   20 continue
      i=i+1    
      if ((oldPDFname(i:i) .eq. '.') .or.
     .    (oldPDFname(i:i) .eq. ' ') .or.
     .    (oldPDFname(i:i) .eq. '[')) then
        validPDF=.true.
        if (oldPDFname(i:i+6) .eq. '.LHgrid') then        
          PDFname=oldPDFname(1:i-1)//'.LHgrid'
        else
          PDFname=oldPDFname(1:i-1)//'.LHpdf'
        endif
      endif  
      if ((i .lt. 40) .and. (validPDF .eqv. .false.)) goto 20
      
      if (validPDF .eqv. .false.) then
        write(6,*) 'Problem with PDFname'
        write(6,*)
        stop
      endif
      
      write(6,*)
      write(6,*) '*******************************************'
      write(6,*) '*     MCFM is calling LHAPDF              *'
      write(6,*) '*                                         *'
      write(6,98) 'PDFname',PDFname(1:49)
      write(6,99) 'PDFmember',PDFmember
      write(6,*) '*******************************************'
      write(6,*)

c      write(6,*) '+ Name = ','PDFsets/'//PDFname
      call InitPDFsetm(0,checkpath('PDFsets/'//PDFname))
c      write(6,*) '+ PDF set succesfully initialized'
      
      oldPDFname2=PDFname2
      validPDF2=.false.
      i=0
   40 continue
      i=i+1    
      if ((oldPDFname2(i:i) .eq. '.') .or.
     .    (oldPDFname2(i:i) .eq. ' ') .or.
     .    (oldPDFname2(i:i) .eq. '[')) then
        validPDF2=.true.
        if (oldPDFname2(i:i+6) .eq. '.LHgrid') then        
          PDFname2=oldPDFname2(1:i-1)//'.LHgrid'
        else
          PDFname2=oldPDFname2(1:i-1)//'.LHpdf'
        endif
      endif  
      if ((i .lt. 40) .and. (validPDF2 .eqv. .false.)) goto 40
      
      if (validPDF2 .eqv. .false.) then
        write(6,*) 'Problem with PDFname'
        write(6,*)
        stop
      endif
      
      write(6,*)
      write(6,*) '*******************************************'
      write(6,*) '*     MCFM is calling LHAPDF              *'
      write(6,*) '*                                         *'
      write(6,98) 'PDFname2',PDFname2(1:49)
      write(6,99) 'PDFmember2',PDFmember2
      write(6,*) '*******************************************'
      write(6,*)

c      write(6,*) '+ Name = ','PDFsets/'//PDFname
      call InitPDFsetm(1,checkpath('PDFsets/'//PDFname2))
c      write(6,*) '+ PDF set succesfully initialized'
      
! c     we will also initialize the pdfs for estar and ncteq 
!       call InitPDFsetm(2,checkpath('PDFsets/eSTARn11_1_1'))
!       call InitPDFsetm(3,checkpath('PDFsets/eSTARn11_207_103'))

      if (PDFmember .lt. 0) then
        PDFerrors=.true.
        call numberPDF(maxPDFsets)
        if (maxPDFsets .gt. 1000) then
          write(6,*) 'ERROR: Max. number of error sets is 1000!'
          stop
        endif
        write(6,*)
        write(6,*) '****************************************'        
        write(6,*) '*        Calculating errors using      *'
        write(6,97) maxPDFsets
        write(6,*) '****************************************'
        call InitPDFm(0,0)
        amz=alphasPDF(zmass)
        currentPDF=0
      else  
        call InitPDFm(0,PDFmember)
        amz=alphasPDF(zmass)
      endif

      if (PDFmember2 .lt. 0) then
        PDFerrors=.true.
        call numberPDF(maxPDFsets)
        if (maxPDFsets .gt. 1000) then
          write(6,*) 'ERROR: Max. number of error sets is 1000!'
          stop
        endif
        write(6,*)
        write(6,*) '****************************************'        
        write(6,*) '*        Calculating errors using      *'
        write(6,97) maxPDFsets
        write(6,*) '****************************************'
        call InitPDFm(1,0)
        amz=alphasPDF(zmass)
        currentPDF=0
      else  
        call InitPDFm(1,PDFmember2)
        amz=alphasPDF(zmass)
      endif

c--- fill MCFM global variable "nlooprun" with the correct value
      call GetOrderAs(iorder)
      nlooprun=iorder+1
      
c--- rename pdlabel to get sensible output name
      pdlabel=PDFname(1:7)
      pdlabel2=PDFname2(1:7)

      return
 
   97 format(' *        ',i4,' sets of error PDFs       *')
   98 format(' *   ',a7,' ',a29,' *')
   99 format(' *  ',a10,i3,'                          *')

  999 write(6,*) 'Error reading lhapdf.DAT'
      call flush(6)
      stop

      end
 

