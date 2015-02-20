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
  namespace Template_Match
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //window search size
      int window_search_size;
      //template size
      int tpl_size;
      //number of repetitions before the tpl refresh
      int rep_tpl;
    };
    
    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      //Read time and data
      struct tm* local;
      //IplImage main
      IplImage* frame;
      //IplImage template match
      IplImage* tpl;
      //IplImage of results
      IplImage* tm;
      //IplImage Backup of main for debug
      IplImage* back;
      //Capture struct - OpenCV
      CvCapture* capture;
      //Buffer for video frame
      CvVideoWriter *writer;
      //Define Font Letter OpenCV
      CvFont font;
      //minimum shift of TPL Track
      CvPoint minloc;
      //maximum shift of TPL Track
      CvPoint maxloc;
      //Main frame width
      int frame_width;
      //Main frame height
      int frame_height;
      // template width
      int tpl_width;
      //template height
      int tpl_height;
      //search window width
      int window_search_width;
      //search window height
      int window_search_height;
      //sensibility of detection of tpl
      double threshold;
      //key press
      char key;
      //Buffer text for frame result
      char text[80];
      //Buffer text for directory for log
      char local_dir[80];
      //User Name
      const char* user_name;
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
      //Flag - Showm options
      bool flag_options;
      //Flag - stat of video record
      bool flag_stat_video;
      //Flag - start record
      bool flag_start;
      //Flag tracking(0=false,1=true)
      bool is_tracking;
      //minimum value - match
      double minval;
      //maximum value - match
      double maxval;
      //!Variables Time
      int hour;
      int min;
      int sec;
      int day;
      int mon;
      int year;
    
      //! Task arguments.
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Window Search Size", m_args.window_search_size)
        .defaultValue("180")
        .minimumValue("0")
        .maximumValue("500")
        .description("Window Search Size");
        
        param("Template Size", m_args.tpl_size)
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
        object_x = frame_width/2;
        object_y = frame_height/2;
        x_mouse = frame_width/2;
        y_mouse = frame_height/2;
        m_args.window_search_size = 100;
        m_args.tpl_size = 40;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }
      
      //!Draw a dashed line
      void
      DashedLine( IplImage* image, CvPoint p1, CvPoint p2, CvScalar color, int interval, bool axis)
      {
        cnt = 0;
        //Vertical
        if (!axis)
        {
          while (cnt < p2.y)
          {
            cvLine(image, cvPoint(p1.x, p1.y + cnt), cvPoint(p2.x, cnt + interval), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
        //Horizontal
        else
        {
          while (cnt < p2.x)
          {
            cvLine(image, cvPoint(p1.x + cnt, p1.y), cvPoint(cnt + interval, p2.y), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
      }
      //! Initialize Values
      void 
      InicValues(void)
      {
        tpl_width = 60;
        tpl_height = 60;
        window_search_width = 110;
        window_search_height = 110;
        m_args.window_search_size = 100;
        m_args.tpl_size = 40;
        threshold = 0.3;
        cnt = 0;
        flag_track = 0;
        m_args.rep_tpl = 10;
        flag_start = 0;
        flag_stat_video = 0;
        flag_options = 0;
      }
      
      /* Save Video Frame Result */
      void save_video(IplImage* image, bool parameter)
      {
        if (flag_stat_video == 0 && parameter == 1)
        {
          #ifdef linux
          sprintf(local_dir,"mkdir /home/$USER/%d_%d_%d_log_video -p",day,mon,year);
          button = system(local_dir);
          user_name = getenv ("USER");
          sprintf(local_dir,"/home/%s/%d_%d_%d_log_video", user_name, day, mon, year);
          sprintf(text,"%s/%d_%d_%d___%d_%d_%d.avi",local_dir,hour,min,sec,day,mon,year);
          #endif
          
          #ifdef _WIN32
          button = system("cd C:\ ");
          sprintf(local_dir,"mkdir %d_%d_%d_log_video",day,mon,year);
          button = system(local_dir);
          sprintf(local_dir,"C:\%d_%d_%d_log_video",day,mon,year);
          sprintf(text,"%s\%d_%d_%d___%d_%d_%d.avi",local_dir,hour,min,sec,day,mon,year);
          #endif
          
          writer = cvCreateVideoWriter(text, CV_FOURCC('M','J','P','G'), 8, cvGetSize(image), 1);
          flag_stat_video = 1;
        }
        
        if (flag_stat_video == 1 && parameter == 1)
          cvWriteFrame(writer, image);      // add the frame to the file
          else if (flag_stat_video == 1 && parameter == 0)
          {
            cvReleaseVideoWriter( &writer );
            flag_stat_video = 0;
          }
      }
      
      /* Save Image Result*/
      void
      save_image(IplImage* image)
      {
        #ifdef linux
        sprintf(local_dir,"mkdir /home/$USER/%d_%d_%d_log_image -p",day,mon,year);
        button = system(local_dir);
        user_name = getenv ("USER");
        sprintf(local_dir,"/home/%s/%d_%d_%d_log_image", user_name, day, mon, year);
        sprintf(text,"%s/%d_%d_%d___%d_%d_%d.jpg",local_dir,hour,min,sec,day,mon,year);
        #endif
        
        #ifdef _WIN32
        button = system("cd C:\ ");
        sprintf(local_dir,"mkdir %d_%d_%d_log_image",day,mon,year);
        button = system(local_dir);
        sprintf(local_dir,"C:\%d_%d_%d_log_image",day,mon,year);
        sprintf(text,"%s\%d_%d_%d___%d_%d_%d.jpg",local_dir,hour,min,sec,day,mon,year);
        #endif
        
        cvSaveImage(text, image);
      }
      
      /*Time acquisition */
      void
      time_acquisition(void)
      {
        time_t t;
        t = time(NULL);
        local = localtime(&t);
        
        hour = local -> tm_hour;
        min = local -> tm_min;
        sec = local -> tm_sec;
        day = local -> tm_mday;
        mon = local -> tm_mon+1;
        year = local -> tm_year+1900;
      }
      /* mouse handler */
      void 
      MouseHandler( int event, int x, int y, int flags, void*)
      {
        button = flags;
        /* user clicked the image, save subimage as template */
        if ( event == CV_EVENT_LBUTTONUP )
        {
          cvReleaseImage( &tpl );
          tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
          cvReleaseImage( &tm );
          tm = cvCreateImage( cvSize( window_search_width - tpl_width + 1, window_search_height - tpl_height + 1 ), IPL_DEPTH_32F, 1);
          x_mouse=x;
          y_mouse=y;
          object_x = x_mouse - ( tpl_width  / 2 );
          object_y = y_mouse - ( tpl_height / 2 );        
          
          if ( (tpl_width  / 2) + x_mouse > frame_width || (tpl_height / 2) + y_mouse > frame_height || x_mouse - (tpl_width / 2) < 0 
|| y_mouse - (tpl_height / 2) < 0)
            inf("\nSmall space\n");
          else
          {
            cvSetImageROI( frame, cvRect( object_x, object_y, tpl_width, tpl_height) );
            cvCopy( frame, tpl, NULL );
            cvResetImageROI( frame );
            is_tracking = 1;
          }
        }
      }
      /* mouse handler - STATIC */
      static void 
      MouseWrapper(int event, int x, int y, int flags, void* opt) 
      {
        Task* cal = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal->MouseHandler(event, x, y, flags, 0);
      } 
      
      /* track object in frame image */
      void 
      TrackObject()
      {
        /* setup position of search window */
        win_x = object_x - ( (window_search_width  - tpl_width) / 2 );
        win_y = object_y - ( (window_search_height - tpl_height) / 2 );

        /****************************** Window margins of tracking *******************************/
                
        if ( (win_x+(window_search_width/2) - (window_search_width/2)) <= 1)
          flag_track = 1;
        else if ( (win_x + window_search_width) >= frame_width)
          flag_track = 2;
        else if ( (win_y + (window_search_height/2)) - (window_search_height/2) <= 1 )
          flag_track = 3;
        else if ( (win_y + window_search_height) >= frame_height)
          flag_track = 4;
        else
          flag_track = 0;

        /***************************************************************************/
        /* search object in search window */
        if (flag_track == 0)
        {
          cvSetImageROI( frame, cvRect( win_x, win_y, window_search_width, window_search_height ) );
          cvMatchTemplate( frame, tpl, tm, CV_TM_CCOEFF_NORMED );
          cvErode(tm, tm, 0, 1);
          cvMinMaxLoc( tm, &minval, &maxval, &minloc, &maxloc, 0 );
          cvResetImageROI( frame );
        }
        /* if object found... */
        if (flag_track == 0 && maxval >= threshold)
        {
          /* save object's current location */
          object_x = win_x + maxloc.x;
          object_y = win_y + maxloc.y;
          
          /* draw a box there */
          cvRectangle( back, cvPoint( object_x, object_y ), cvPoint( object_x + tpl_width, object_y + tpl_height ), cvScalar( 0, 255, 
0, 0 ), 2, 0, 0 );
          cvRectangle( back, cvPoint( win_x, win_y ), cvPoint( win_x + window_search_width, win_y + window_search_height ), cvScalar( 
255, 0, 0, 0 ), 2, 0, 0 );
          cvCircle(back, cvPoint( object_x + tpl_width/2, object_y + tpl_height/2 ),3,cvScalar( 0, 255, 0, 0 ), 1, 8, 0);
            
          /*Refresh TPL*/
          cnt_refresh++;
          if (cnt_refresh > m_args.rep_tpl && m_args.rep_tpl != 0)
          {
            cvSetImageROI( frame, cvRect( object_x, object_y, tpl_width, tpl_height) );
            cvReleaseImage( &tpl );
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
            tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
            cvCopy( frame, tpl);
            cvResetImageROI( frame );
            cnt_refresh=0;
          }
        }
        else
        {
          /* if not found... */
          inf("\nObject Lost.\nDefine new template - ERRO:%d\n", flag_track);
          is_tracking = 0;
          flag_track = 0;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        //Initialize Values
        InicValues();
       
        //capture = cvCaptureFromCam(0);//for webcam
        //capture = cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg"); //for axis cam
        //capture = cvCaptureFromFile("http://10.0.3.31:8080/video.wmv"); //for stream video
        capture = cvCaptureFromFile("rtsp://10.0.20.207:554/live/ch00_0"); //for airvision mini SENS-11
        while ( capture  == 0 && cnt < 4)
        {
          inf("\n\tERROR OPEN CAM\n");
          capture = cvCaptureFromFile("rtsp://10.0.20.207:554/live/ch00_0");
          //capture = cvCaptureFromCam(0);//for laptop cam
          //capture = cvCaptureFromFile("http://10.0.3.31:8080/video.wmv");
          //capture = cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg");
          cnt++;
          waitForMessages(1.0);
        }

        //Capture Image
        frame = cvQueryFrame( capture );
        //Size of Image capture
        frame_width = frame -> width;
        frame_height = frame -> height;

        /* create template image */
        tpl = cvCreateImage( cvSize( tpl_width, tpl_height), frame->depth, frame->nChannels );
        /* create image for template matching result */
        tm = cvCreateImage( cvSize( window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1 );

        //Window Name
        cvNamedWindow( "Live Video" , 0);
        cvResizeWindow( "Live Video" , 640, 480);
        //Calback for mouse click
        cvSetMouseCallback( "Live Video", MouseWrapper, this);
       
        cvInitFont(&font, CV_FONT_HERSHEY_SIMPLEX, 0.5, 0.5, 0, 1.5, CV_AA);

        while (!stopping())
        {
          frame = cvQueryFrame( capture );
          if ( !capture )
          {
            inf("\n\tERROR GRAB IMAGE\n");
          }
          
          /*clone Image for debud */
          back = cvCloneImage( frame );
            
          /* perform tracking if template is available */
          if ( is_tracking ) TrackObject();
            
          //Add information in frame result
          time_acquisition();
          sprintf(text,"X = %d",object_x + tpl_width/2);
          cvPutText(back, text, cvPoint(10, 20), &font, cvScalar(255, 255, 255, 0));
          sprintf(text,"Y = %d",object_y + tpl_height/2);
          cvPutText(back, text, cvPoint(10, 40), &font, cvScalar(255, 255, 255, 0));
          sprintf(text,"%d",frame_width/2);
          cvPutText(back, text, cvPoint(frame_width/2 + 2, 13), &font, cvScalar(255, 255, 255, 0));
          sprintf(text,"%d",frame_height/2);
          cvPutText(back, text, cvPoint(frame_width - 34, frame_height/2 -2), &font, cvScalar(255, 255, 255, 0));
          sprintf(text,"Hour: %d:%d:%d",hour,min,sec);
          cvPutText(back, text, cvPoint(10, 60), &font, cvScalar(255, 255, 100, 0));
          sprintf(text,"Data: %d-%d-%d",day,mon,year);
          cvPutText(back, text, cvPoint(10, 80), &font, cvScalar(255, 255, 100, 0));
          text[0]='\0';
          
          //Draw axis in frame result; 0 -> vertical, 1 -> horizontal
          DashedLine(back, cvPoint(frame_width/2, 0), cvPoint(frame_width/2, frame_height), cvScalar(255, 255, 255, 0), 20, 0);
          DashedLine(back, cvPoint(0, frame_height/2), cvPoint(frame_width, frame_height/2), cvScalar(255, 255, 255, 0), 20, 1);
            
          //Save video
          if ( flag_start )
          {
            save_video( back, 1);
            cvCircle(back, cvPoint( frame_width - 20, 20 ), 4, cvScalar( 0, 255, 0, 0 ), 5, 8, 0);
          }
          else
          {
            save_video( back, 0);
            cvCircle(back, cvPoint( frame_width - 20, 20 ), 4, cvScalar( 0, 0, 255, 0 ), 5, 8, 0);
          }
          
          //Showm Image - Result
          cvShowImage( "Live Video", back);
          if ( flag_options )
          {
            cvCreateTrackbar("Refresh TPL in:", "Live Video", &m_args.rep_tpl, 12, 0);
            cvCreateTrackbar("TPL Size", "Live Video", &m_args.tpl_size, frame_width - 100, 0);
            cvCreateTrackbar("WINDOW  Search Size", "Live Video", &m_args.window_search_size, frame_width - 50, 0);
          }
          else if ( !flag_options && key == 'm' )
          {
            cvDestroyWindow( "Live Video" );
            cvNamedWindow( "Live Video" , 0);
            cvResizeWindow( "Live Video" , 640, 480);
            cvSetMouseCallback( "Live Video", MouseWrapper, this);
            key = 'l';
          }
            
          //if size of window change
          if (window_search_height != m_args.window_search_size)
          {
            window_search_height = m_args.window_search_size;
            window_search_width = m_args.window_search_size;
            cvReleaseImage( &tm );
            tm = cvCreateImage( cvSize( window_search_width - tpl_width + 1, window_search_height - tpl_height + 1), IPL_DEPTH_32F, 1);
          }
          
          if ( m_args.window_search_size <= m_args.tpl_size)
            m_args.window_search_size = m_args.tpl_size + 10;
          
          window_search_height = m_args.window_search_size;
          window_search_width = m_args.window_search_size;
          tpl_height = m_args.tpl_size;
          tpl_width = m_args.tpl_size;
            
          key = cvWaitKey(10);
          // Save Snapshot
          if ( key == 's' || key == 'S')
            save_image( back );
          // Start/Stop record of video
          if ( key == 'r' || key == 'R')
            flag_start = !flag_start;
          // Show/hide Menu parameters
          if ( key == 'm' || key == 'M')
            flag_options = !flag_options;
                
          cvReleaseImage( &back );
        }
        cvDestroyWindow( "Live Video" );
        cvReleaseCapture(&capture);
      }
    };
  }
}

DUNE_TASK