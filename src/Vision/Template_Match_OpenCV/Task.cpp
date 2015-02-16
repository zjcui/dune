//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

//OpenCV headers
#include <opencv2/opencv.hpp>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace Template_Match_OpenCV
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //window search size
      int WINDOW_search_size;
      //template size
      int TPL_size;
      //number of repetitions before the tpl refresh
      int rep_tpl;
    };
    
    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      //IplImage main
      IplImage *frame;
      //IplImage template match
      IplImage *tpl;
      //IplImage of results
      IplImage *tm;
      //IplImage Backup of main for debug
      IplImage *back;
      //minimum shift of TPL Track
      CvPoint minloc;
      //maximum shift of TPL Track
      CvPoint maxloc;
      //Main frame width
      int  frame_WIDTH;
      //Main frame height
      int  frame_HEIGHT;
      // template width
      int  TPL_WIDTH;
      //template height
      int  TPL_HEIGHT;
      //search window width
      int  WINDOW_SEARCH_WIDTH;
      //search window height
      int  WINDOW_SEARCH_HEIGHT;
      //sensibility of detection of tpl
      float  THRESHOLD;
      //key press
      char key;
      //Buffer text for frame result
      char text[80];
      //counter refresh TPL
      int cnt_refresh;
      //Position of 1º Pixel of TPL in width
      int object_x;
      //Position of 1º Pixel of TPL in height
      int object_y;
      //coordinate x of mouse
      int x_mouse;
      //coordinate y of mouse
      int y_mouse;
      //button press of mouse
      int button;
      //Global counter
      int cnt;
      //coordinate of 1º Pixel Window - X
      int win_x;
      //coordinate of 1º Pixel Window - Y
      int win_y;
      //Flag track(0=off,1=on)
      int flag_track;
      //Flag tracking(0=false,1=true)
      bool is_tracking;
      //minimum value - match
      double  minval;
      //maximum value - match
      double maxval;
    
      //! Task arguments.
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Window Search Size", m_args.WINDOW_search_size)
        .defaultValue("180")
        .minimumValue("0")
        .maximumValue("500")
        .description("Window Search Size");
        
        param("Template Size", m_args.TPL_size)
        .defaultValue("100")
        .minimumValue("0")
        .maximumValue("480")
        .description("Template Size");
        
        param("Number of repetitions before the tpl refresh", m_args.rep_tpl)
        .defaultValue("6")
        .minimumValue("0")
        .maximumValue("12")
        .description("Number of repetitions before the tpl refresh");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        object_x = frame_WIDTH/2;
        object_y = frame_HEIGHT/2;
        x_mouse = frame_WIDTH/2;
        y_mouse = frame_HEIGHT/2;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      /* mouse handler */
      void 
      MouseHandler( int event, int x, int y, int flags, void *)
      {
        button=flags;

        /* user clicked the image, save subimage as template */
        if ( event == CV_EVENT_LBUTTONUP )
        {
          cvReleaseImage( &tpl );
          tpl = cvCreateImage( cvSize( TPL_WIDTH, TPL_HEIGHT ), frame->depth, frame->nChannels );
          cvReleaseImage( &tm );
          tm = cvCreateImage( cvSize( WINDOW_SEARCH_WIDTH  - TPL_WIDTH  + 1, WINDOW_SEARCH_HEIGHT - TPL_HEIGHT + 1 ), IPL_DEPTH_32F, 1 
);
          x_mouse=x;
          y_mouse=y;
          object_x = x_mouse - ( TPL_WIDTH  / 2 );
          object_y = y_mouse - ( TPL_HEIGHT / 2 );        
          
          if ( (TPL_WIDTH  / 2) + x_mouse > frame_WIDTH || (TPL_HEIGHT / 2) + y_mouse > frame_HEIGHT || x_mouse - (TPL_WIDTH / 2) < 0 || 
y_mouse - (TPL_HEIGHT / 2) < 0)
            inf("\nSmall space\n");
          else
          {
            cvSetImageROI( frame, cvRect( object_x, object_y, TPL_WIDTH, TPL_HEIGHT ) );
            cvCopy( frame, tpl, NULL );
            //cvShowImage("Inic",tpl);
            cvResetImageROI( frame );
            is_tracking = 1;
            //inf( ">>> Tracking Start <<<\n");
          }
        }
      }
      /* mouse handler - STATIC */
      static void 
      MouseWrapper(int event, int x, int y, int flags, void *opt) 
      {
        Task * cal = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal->MouseHandler(event, x, y,flags, 0);
      } 
      
      /* track object in frame image */
      void 
      TrackObject()
      {
        /* setup position of search window */
        win_x = object_x - ( ( WINDOW_SEARCH_WIDTH  - TPL_WIDTH  ) / 2 );
        win_y = object_y - ( ( WINDOW_SEARCH_HEIGHT - TPL_HEIGHT ) / 2 );

        /****************************** Window margins of tracking *******************************/
                
        if( (win_x+(WINDOW_SEARCH_WIDTH/2) - (WINDOW_SEARCH_WIDTH/2)) <= 1)
          flag_track=1;
        else if( (win_x + WINDOW_SEARCH_WIDTH) >= frame_WIDTH )
          flag_track=2;
        else if( (win_y + (WINDOW_SEARCH_HEIGHT/2)) - (WINDOW_SEARCH_HEIGHT/2) <= 1 )
          flag_track=3;
        else if( (win_y + WINDOW_SEARCH_HEIGHT) >= frame_HEIGHT )
          flag_track=4;
        else
          flag_track=0;

        /***************************************************************************/
        /* search object in search window */
        if(flag_track==0)
        {
          cvSetImageROI( frame, cvRect( win_x, win_y, WINDOW_SEARCH_WIDTH, WINDOW_SEARCH_HEIGHT ) );
          //cvShowImage("tpl",tpl);
          cvMatchTemplate( frame, tpl, tm, CV_TM_SQDIFF_NORMED );
          //cvShowImage("1",tm);
          cvMinMaxLoc( tm, &minval, &maxval, &minloc, &maxloc, 0 );
          cvResetImageROI( frame );
        }
        /* if object found... */
        if(flag_track==0 && minval>0 && minval <= THRESHOLD)
        {
          //inf("\nminval = %f\n",minval);
          /* save object's current location */
          object_x = win_x + minloc.x;
          object_y = win_y + minloc.y;
          
          /* draw a box there */
          cvRectangle( back, cvPoint( object_x, object_y ), cvPoint( object_x + TPL_WIDTH, object_y + TPL_HEIGHT ), cvScalar( 0, 255, 0, 
0 ), 2, 0, 0 );
          cvRectangle( back, cvPoint( win_x, win_y ), cvPoint( win_x + WINDOW_SEARCH_WIDTH, win_y + WINDOW_SEARCH_HEIGHT ), cvScalar( 
255, 0, 0, 0 ), 4, 0, 0 );
          cvCircle(back, cvPoint( object_x + TPL_WIDTH/2, object_y + TPL_HEIGHT/2 ),3,cvScalar( 0, 255, 0, 0 ),1,8,0);
            
          /*Refresh TPL*/
          cnt_refresh++;
          if(cnt_refresh > m_args.rep_tpl)
          {
            cvSetImageROI( frame, cvRect( object_x, object_y, TPL_WIDTH, TPL_HEIGHT ) );
            //cvShowImage("Act",frame);
            cvReleaseImage( &tpl );
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( WINDOW_SEARCH_WIDTH  - TPL_WIDTH  + 1, WINDOW_SEARCH_HEIGHT - TPL_HEIGHT + 1 ), IPL_DEPTH_32F, 
1 );
            tpl=cvCreateImage( cvSize( TPL_WIDTH, TPL_HEIGHT ), frame->depth, frame->nChannels );
            cvCopy(frame,tpl);
            cvResetImageROI( frame );
            cnt_refresh=0;
          }
        }
        else
        {
          /* if not found... */
          inf("\nObjecto Perdido.\nDefinir novo template ERRO:%d\n", flag_track);
          is_tracking = 0;
          flag_track=0;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {

        TPL_WIDTH = 100;      /* template width       */
        TPL_HEIGHT = 100;      /* template height      */
        WINDOW_SEARCH_WIDTH = 180;      /* search window width  */
        WINDOW_SEARCH_HEIGHT = 180;      /* search window height */
        m_args.WINDOW_search_size = 180;
        m_args.TPL_size = 100;
        THRESHOLD = 1;
        cnt=0;
        flag_track=0;
        m_args.rep_tpl=10;

        CvCapture *capture;
        //capture=cvCaptureFromCam(0);//for laptop cam
        //capture=cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg");
        capture=cvCaptureFromFile("http://10.0.3.31:8080/video.wmv");
        while( capture==0 && cnt<4)
        {
          inf("\n\tERROR OPEN CAM\n");
          //capture=cvCaptureFromCam(0);//for laptop cam
          capture=cvCaptureFromFile("http://10.0.3.31:8080/video.wmv");
          //capture=cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg");
          cnt++;
          waitForMessages(1.0);
        }

        //Capture Image
        frame = cvQueryFrame( capture );
        //Size of Image capture
        frame_WIDTH = frame -> width;
        frame_HEIGHT = frame -> height;

        /* create template image */
        tpl = cvCreateImage( cvSize( TPL_WIDTH, TPL_HEIGHT ), frame->depth, frame->nChannels );
        /* create image for template matching result */
        tm = cvCreateImage( cvSize( WINDOW_SEARCH_WIDTH  - TPL_WIDTH  + 1, WINDOW_SEARCH_HEIGHT - TPL_HEIGHT + 1 ), IPL_DEPTH_32F, 1 );

        //Window Name
        cvNamedWindow( "Live Video" , 0);
        cvResizeWindow( "Live Video" , 800, 600);
        //Calback for mouse click
        cvSetMouseCallback( "Live Video", MouseWrapper, this);
        
        //Define Font Letter OpenCV
        CvFont font;
        cvInitFont(&font, CV_FONT_HERSHEY_SIMPLEX, 0.75, 0.75, 0, 2, CV_AA);

        while (!stopping())
        {
          frame = cvQueryFrame( capture );
          if( !capture )
          {
            inf("\n\tERROR GRAB IMAGE\n");
          }
          
          /*clone Image for debud */
          back=cvCloneImage(frame);
            
          /* perform tracking if template is available */
          if( is_tracking ) TrackObject();
            
          //Add information in frame
          sprintf(text,"X = %d",object_x + TPL_WIDTH/2);
          cvPutText(back, text, cvPoint(10, 20), &font, cvScalar(255, 255, 255, 0));
          sprintf(text,"Y = %d",object_y + TPL_HEIGHT/2);
          cvPutText(back, text, cvPoint(10, 40), &font, cvScalar(255, 255, 255, 0));
          text[0]='\0';
            
          //Showm Image - Result
          cvShowImage( "Live Video", back);
          cvCreateTrackbar("Refresh TPL in:", "Live Video", &m_args.rep_tpl, 12, 0);
          cvCreateTrackbar("TPL Size", "Live Video", &m_args.TPL_size, frame_WIDTH-100, 0);
          cvCreateTrackbar("WINDOW  Search Size", "Live Video", &m_args.WINDOW_search_size, frame_WIDTH-50, 0);
            
          //if size of window change
          if(WINDOW_SEARCH_HEIGHT != m_args.WINDOW_search_size)
          {
            WINDOW_SEARCH_HEIGHT = m_args.WINDOW_search_size;
            WINDOW_SEARCH_WIDTH = m_args.WINDOW_search_size;
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( WINDOW_SEARCH_WIDTH - TPL_WIDTH  + 1, WINDOW_SEARCH_HEIGHT - TPL_HEIGHT+ 1 ), IPL_DEPTH_32F, 1);
          }
          
          if( m_args.WINDOW_search_size <= m_args.TPL_size)
            m_args.WINDOW_search_size = m_args.TPL_size+10;
          
          WINDOW_SEARCH_HEIGHT = m_args.WINDOW_search_size;
          WINDOW_SEARCH_WIDTH = m_args.WINDOW_search_size;
          TPL_HEIGHT = m_args.TPL_size;
          TPL_WIDTH = m_args.TPL_size;
            
          key=cvWaitKey(10);
                
          cvReleaseImage(&back);
          //waitForMessages(1.0);
        }
        cvDestroyWindow( "Live Video" );
        cvReleaseCapture(&capture);
      }
    };
  }
}

DUNE_TASK