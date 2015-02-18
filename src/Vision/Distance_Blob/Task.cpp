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

//CvBlob Headers (DUME VENDOR)
#include <cvblob.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace Distance_Blob
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //window search size
      int window_search_size;
      //template size
      int tpl_size;
      //Blob Area Size
      int area_size;
      //number of repetitions before the tpl refresh
      int rep_tpl;
      //Color interval - search
      int color_int;
    };
    
    struct Task: public DUNE::Tasks::Task
    {
      struct IMAGE
      {
        //IplImage template match
        IplImage* tpl;
        //IplImage of results
        IplImage* tm_result;
        //Threshold buffer
        IplImage* threshy;
        //Image Variable for blobs
        IplImage* labelImg;
        //minimum shift of TPL Track
        CvPoint minloc;
        //maximum shift of TPL Track
        CvPoint maxloc;
        //Structure to hold blobs
        cvb::CvBlobs blobs;
        //Position of 1º Pixel of TPL in width
        int object_x;
        //Position of 1º Pixel of TPL in height
        int object_y;
        //coordinate of 1º Pixel of Window shearch - X
        int win_x;
        //coordinate of 1º Pixel of Window shearch - Y
        int win_y;
        //Flag track(0=off,1=on)
        int flag_track;
        //Green value for blob
        int green;
        //Blue value for blob
        int blue;
        //Red value for blob
        int red;
        //Step data image
        int step;
        //Number of channels of image
        int channels;
        //Minimal size of blob
        int min_area;
        //Maximum size of blob
        int max_area;
        //Data image
        uchar* data;
        //minimum value - match
        double  minval;
        //maximum value - match
        double maxval;
        //Position of Pixel blob - X
        double moment10;
        //Position of Pixel blob - Y
        double moment01;
        //Size of blob
        double area;
        //Flag tracking(0=false,1=true)
        bool is_tracking;
      };
      
      //Read time and data
      struct tm* local;
      //!Variables
      //IplImage main frame
      IplImage* frame;
      //IplImage Backup of main for debug
      IplImage* back;
      //Buffer for video frame
      CvVideoWriter *writer;
      //Main frame width
      int  frame_width;
      //Main frame height
      int  frame_height;
      // template width
      int  tpl_width;
      //template height
      int  tpl_height;
      //search window width
      int  window_search_width;
      //search window height
      int  window_search_height;
      //sensibility of detection of tpl
      float  threshold;
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
      //coordinate x of mouse
      int x_mouse;
      //coordinate y of mouse
      int y_mouse;
      //button press of mouse
      int button;
      //Global counter
      int cnt;
      //Flag - Showm image tresh
      bool flag_tresh;
      //Flag - stat of video record
      bool flag_stat_video;
      //Flag - start record
      bool flag_start;
      //Position of Pixel blob - X
      double moment10;
      //Position of Pixel blob - Y
      double moment01;
      //Size of blob
      double area;
      //!Variables Time
      int hour;
      int min;
      int sec;
      int day;
      int mon;
      int year;
          
      //! Task arguments.
      Arguments m_args;
      //!Struct for Template Image 1
      IMAGE tpl1;
      //!Struct for Template Image 2
      IMAGE tpl2;
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
        
        param("Blob Area", m_args.area_size)
        .defaultValue("5000")
        .minimumValue("1")
        .maximumValue("10000")
        .description("Blob Area");
        
        param("Number of repetitions before the tpl refresh", m_args.rep_tpl)
        .defaultValue("6")
        .minimumValue("0")
        .maximumValue("12")
        .description("Number of repetitions before the tpl refresh");
        
        param("Color Interval", m_args.rep_tpl)
        .defaultValue("20")
        .minimumValue("1")
        .maximumValue("120")
        .description("Color Interval");
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
        tpl1.object_x = frame_width/2;
        tpl1.object_y = frame_height/2;
        tpl2.object_x = frame_width/2;
        tpl2.object_y = frame_height/2;
        x_mouse = frame_width/2;
        y_mouse = frame_height/2;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
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
          flag_stat_video=0;
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
      MouseHandler( int event, int x, int y, int flags, void *)
      {
        button=flags;

        /* user clicked the image, save subimage as template */
        //LEFT CLICK
        if ( event == CV_EVENT_LBUTTONUP )
        {
          cvReleaseImage( &tpl1.tpl );
          tpl1.tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
          cvReleaseImage( &tpl1.tm_result );
          tpl1.tm_result = cvCreateImage( cvSize( window_search_width  - tpl_width  + 1, window_search_height - tpl_height + 1 ), 
IPL_DEPTH_32F, 1 );
          x_mouse=x;
          y_mouse=y;
          tpl1.object_x = x_mouse - ( tpl_width  / 2 );
          tpl1.object_y = y_mouse - ( tpl_height / 2 );
          /* Capture color of object*/
          tpl1.step  = frame->widthStep;
          tpl1.data = (uchar*) frame->imageData;
          tpl1.channels= frame->nChannels;
          tpl1.blue = tpl1.data[y*tpl1.step + x*tpl1.channels];
          tpl1.green = tpl1.data[y*tpl1.step + x*tpl1.channels+1];
          tpl1.red = tpl1.data[y*tpl1.step + x*tpl1.channels+2];
          
          if ( (tpl_width  / 2) + x_mouse > frame_width || (tpl_height / 2) + y_mouse > frame_height || x_mouse - (tpl_width / 2) < 0 
|| y_mouse - (tpl_height / 2) < 0)
            inf(DTR("\nSmall space\n"));
          else
          {
            cvSetImageROI( frame, cvRect( tpl1.object_x, tpl1.object_y, tpl_width, tpl_height ) );
            cvCopy( frame, tpl1.tpl, NULL );
            //cvShowImage("Inic",tpl);
            cvResetImageROI( frame );
            tpl1.is_tracking = 1;
            //inf( ">>> Tracking Start <<<\n");
          }
        }
        //RIGHT CLICK or middle button
        else if ( event == CV_EVENT_RBUTTONUP || event == CV_EVENT_MBUTTONUP )
        {
          cvReleaseImage( &tpl2.tpl );
          tpl2.tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
          cvReleaseImage( &tpl2.tm_result );
          tpl2.tm_result = cvCreateImage( cvSize( window_search_width  - tpl_width  + 1, window_search_height - tpl_height + 1 ), 
IPL_DEPTH_32F, 1);
          x_mouse=x;
          y_mouse=y;
          tpl2.object_x = x_mouse - ( tpl_width  / 2 );
          tpl2.object_y = y_mouse - ( tpl_height / 2 );
          /* Capture color of object*/
          tpl2.step  = frame->widthStep;
          tpl2.data = (uchar*) frame->imageData;
          tpl2.channels= frame->nChannels;
          tpl2.blue = tpl2.data[y*tpl2.step + x*tpl2.channels];
          tpl2.green = tpl2.data[y*tpl2.step + x*tpl2.channels+1];
          tpl2.red = tpl2.data[y*tpl2.step + x*tpl2.channels+2];
          
          if ( (tpl_width  / 2) + x_mouse > frame_width || (tpl_height / 2) + y_mouse > frame_height || x_mouse - (tpl_width / 2) < 0 
|| y_mouse - (tpl_height / 2) < 0)
            inf(DTR("\nSmall space\n"));
          else
          {
            cvSetImageROI( frame, cvRect( tpl2.object_x, tpl2.object_y, tpl_width, tpl_height ) );
            cvCopy( frame, tpl2.tpl, NULL );
            //cvShowImage("Inic",tpl);
            cvResetImageROI( frame );
            tpl2.is_tracking = 1;
            //inf( ">>> Tracking Start <<<\n");
          }
        }
      }
      
      /* mouse handler - STATIC */
      static void 
      MouseWrapper(int event, int x, int y, int flags, void* opt) 
      {
        Task* cal = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal->MouseHandler(event, x, y,flags, 0);
      } 
      
      /* track object in frame image */
      void 
      TrackObject(void)
      {
        /* setup position of search window */
        tpl1.win_x = tpl1.object_x - ( ( window_search_width  - tpl_width  ) / 2 );
        tpl1.win_y = tpl1.object_y - ( ( window_search_height - tpl_height ) / 2 );
        tpl2.win_x = tpl2.object_x - ( ( window_search_width  - tpl_width  ) / 2 );
        tpl2.win_y = tpl2.object_y - ( ( window_search_height - tpl_height ) / 2 );

        /****************************** Window margins of tracking *******************************/
        // TPL 1
        if ( (tpl1.win_x+(window_search_width/2) - (window_search_width/2)) <= 1)
          tpl1.flag_track=11;
        else if ( (tpl1.win_x + window_search_width) >= frame_width )
          tpl1.flag_track=12;
        else if ( (tpl1.win_y + (window_search_height/2)) - (window_search_height/2) <= 1 )
          tpl1.flag_track=13;
        else if ( (tpl1.win_y + window_search_height) >= frame_height )
          tpl1.flag_track=14;
        else
          tpl1.flag_track=0;
        
        // TPL 2
        if ( (tpl2.win_x+(window_search_width/2) - (window_search_width/2)) <= 1)
          tpl2.flag_track=21;
        else if ( (tpl2.win_x + window_search_width) >= frame_width )
          tpl2.flag_track=22;
        else if ( (tpl2.win_y + (window_search_height/2)) - (window_search_height/2) <= 1 )
          tpl2.flag_track=23;
        else if ( (tpl2.win_y + window_search_height) >= frame_height )
          tpl2.flag_track=24;
        else
          tpl2.flag_track=0;

        /***************************************************************************/
        /* search object in search window */
        //TPL1
        if (tpl1.flag_track==0)
        {
          cvSetImageROI( frame, cvRect( tpl1.win_x, tpl1.win_y, window_search_width, window_search_height ) );
          //cvShowImage("tpl",tpl);
          cvMatchTemplate( frame, tpl1.tpl, tpl1.tm_result, CV_TM_SQDIFF_NORMED );
          //cvShowImage("1",tm_result);
          cvMinMaxLoc( tpl1.tm_result, &tpl1.minval, &tpl1.maxval, &tpl1.minloc, &tpl1.maxloc, 0 );
          cvResetImageROI( frame );
        }
        //TPL2
        if (tpl2.flag_track==0)
        {
          cvSetImageROI( frame, cvRect( tpl2.win_x, tpl2.win_y, window_search_width, window_search_height ) );
          //cvShowImage("tpl",tpl);
          cvMatchTemplate( frame, tpl2.tpl, tpl2.tm_result, CV_TM_SQDIFF_NORMED );
          //cvShowImage("1",tm_result);
          cvMinMaxLoc( tpl2.tm_result, &tpl2.minval, &tpl2.maxval, &tpl2.minloc, &tpl2.maxloc, 0 );
          cvResetImageROI( frame );
        }
        
        /* if object found... */
        //TPL1
        if (tpl1.flag_track==0 && tpl1.minval>0 && tpl1.minval <= threshold)
        {
          //inf("\nminval = %f\n",minval);
          /* save object's current location by template match */
          tpl1.object_x = tpl1.win_x + tpl1.minloc.x;
          tpl1.object_y = tpl1.win_y + tpl1.minloc.y;
          
          /* location by blob */
          if (tpl1.threshy == NULL)
            tpl1.threshy=cvCreateImage(cvGetSize(tpl1.tpl),8,1); //Threshold image
          if (tpl1.labelImg == NULL)
              tpl1.labelImg=cvCreateImage(cvGetSize(tpl1.tpl),IPL_DEPTH_LABEL,1);//Image Variable for blobs
          
          //Thresholding the frame for color
          cvInRangeS(tpl1.tpl,cvScalar(tpl1.blue - m_args.color_int, tpl1.green - m_args.color_int, tpl1.red 
- m_args.color_int),cvScalar(tpl1.blue + m_args.color_int, tpl1.green + m_args.color_int, tpl1.red + m_args.color_int),tpl1.threshy);
          //Filtering the frame
          cvSmooth(tpl1.threshy,tpl1.threshy,CV_MEDIAN,7,7);
          cvShowImage("tresh 1",tpl1.threshy);
          if (flag_tresh == 1)
            cvMoveWindow("tresh 1",780,50);
          else
            cvDestroyWindow("tresh 1");
          //Finding the blobs
          cvLabel(tpl1.threshy,tpl1.labelImg,tpl1.blobs);
          //Filter by size of blob
          cvFilterByArea(tpl1.blobs,tpl1.min_area,tpl1.max_area);
          for (cvb::CvBlobs::const_iterator it=tpl1.blobs.begin(); it!=tpl1.blobs.end(); ++it)
          {
            tpl1.moment10 = it->second->m10;
            tpl1.moment01 = it->second->m01;
            tpl1.area = it->second->area;
          }
         
          //Calculating the current position of blob
          if ( (tpl1.moment10/tpl1.area) > 0  && (tpl1.moment01/tpl1.area) > 0 && (tpl1.moment10/tpl1.area) < frame_width  && 
(tpl1.moment01/tpl1.area) < frame_height )
          {
            tpl1.object_x = (tpl1.object_x + (tpl1.moment10/tpl1.area)) - (tpl_width/2);
            tpl1.object_y = (tpl1.object_y + (tpl1.moment01/tpl1.area)) - (tpl_height/2);
          }
         
          cvReleaseImage(&tpl1.threshy);
          cvReleaseImage(&tpl1.labelImg);
          
          /* draw a box result there */
          cvRectangle( back, cvPoint( tpl1.object_x, tpl1.object_y ), cvPoint( tpl1.object_x + tpl_width, tpl1.object_y + tpl_height ), 
cvScalar( 0, 255, 0, 0 ), 2, 0, 0 );
          cvRectangle( back, cvPoint( tpl1.win_x, tpl1.win_y ), cvPoint( tpl1.win_x + window_search_width, tpl1.win_y + 
window_search_height ), cvScalar( 255, 0, 0, 0 ), 4, 0, 0 );
          cvCircle(back, cvPoint( tpl1.object_x + (tpl1.moment10/tpl1.area), tpl1.object_y + (tpl1.moment01/tpl1.area) ),3,cvScalar( 0, 
255, 0, 0 ),1,8,0);
        }
        else
        {
          /* if not found... */
          //inf("\nObjecto Perdido.\nDefinir novo template 1 ERRO:%d\n", tpl1.flag_track);
          tpl1.is_tracking = 0;
          tpl1.flag_track=0;
        }
        //TPL2
        if (tpl2.flag_track==0 && tpl2.minval>0 && tpl2.minval <= threshold)
        {
          //inf("\nminval = %f\n",minval);
          /* save object's current location */
          tpl2.object_x = tpl2.win_x + tpl2.minloc.x;
          tpl2.object_y = tpl2.win_y + tpl2.minloc.y;
          
          /* location by blob */
          if (tpl2.threshy == NULL)
            tpl2.threshy=cvCreateImage(cvGetSize(tpl2.tpl),8,1); //Threshold image
          if (tpl2.labelImg == NULL)
            tpl2.labelImg=cvCreateImage(cvGetSize(tpl2.tpl),IPL_DEPTH_LABEL,1);//Image Variable for blobs
              
          //Thresholding the frame for color
          cvInRangeS(tpl2.tpl,cvScalar(tpl2.blue - m_args.color_int, tpl2.green - m_args.color_int, tpl2.red -m_args.color_int), 
cvScalar(tpl2.blue + m_args.color_int, tpl2.green + m_args.color_int, tpl2.red + m_args.color_int),tpl2.threshy);
          //Filtering the frame
          cvSmooth(tpl2.threshy,tpl2.threshy,CV_MEDIAN,7,7);
          cvShowImage("tresh 2",tpl2.threshy);
          if (flag_tresh == 1)
            cvMoveWindow("tresh 2",780,250);
          else
            cvDestroyWindow("tresh 2");
          //Finding the blobs
          cvLabel(tpl2.threshy,tpl2.labelImg,tpl2.blobs);
          //Filter by size of blob
          cvFilterByArea(tpl2.blobs,tpl2.min_area,tpl2.max_area);
          for (cvb::CvBlobs::const_iterator it=tpl2.blobs.begin(); it!=tpl2.blobs.end(); ++it)
          {
            tpl2.moment10 = it->second->m10;
            tpl2.moment01 = it->second->m01;
            tpl2.area = it->second->area;
          }
          
          if ( (tpl2.moment10/tpl2.area) > 0  && (tpl2.moment01/tpl2.area) > 0 && (tpl2.moment10/tpl2.area) < frame_width  && 
            (tpl2.moment01/tpl2.area) < frame_height )
          {
            tpl2.object_x = (tpl2.object_x + (tpl2.moment10/tpl2.area)) - (tpl_width/2);
            tpl2.object_y = (tpl2.object_y + (tpl2.moment01/tpl2.area)) - (tpl_height/2);
          }
          
          cvReleaseImage(&tpl2.threshy);
          cvReleaseImage(&tpl2.labelImg);
          
          
          /* draw a box there */
          cvRectangle( back, cvPoint( tpl2.object_x, tpl2.object_y ), cvPoint( tpl2.object_x + tpl_width, tpl2.object_y + tpl_height ), 
cvScalar( 0, 255, 0, 0 ), 2, 0, 0 );
          cvRectangle( back, cvPoint( tpl2.win_x, tpl2.win_y ), cvPoint( tpl2.win_x + window_search_width, tpl2.win_y + 
window_search_height ), cvScalar( 0, 0, 255, 0 ), 4, 0, 0 );
          cvCircle(back, cvPoint( tpl2.object_x + (tpl2.moment10/tpl2.area), tpl2.object_y + (tpl2.moment01/tpl2.area) ),3,cvScalar( 0, 
255, 0, 0 ),1,8,0);
        }
        else
        {
          /* if not found... */
          //inf("\nObjecto Perdido.\nDefinir novo template 2 ERRO:%d\n", tpl2.flag_track);
          tpl2.is_tracking = 0;
          tpl2.flag_track=0;
        }
        
        /*Refresh TPL*/
        cnt_refresh++;
        if (cnt_refresh > m_args.rep_tpl)
        {
          //TPL1
          cvSetImageROI( frame, cvRect( tpl1.object_x, tpl1.object_y, tpl_width, tpl_height ) );
          //cvShowImage("Act",frame);
          cvReleaseImage( &tpl1.tpl );
          cvReleaseImage( &tpl1.tm_result );
          tpl1.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1), 
IPL_DEPTH_32F, 1 );
          tpl1.tpl=cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
          cvCopy(frame,tpl1.tpl);
          cvResetImageROI( frame );
          //TPL2
          cvSetImageROI( frame, cvRect( tpl2.object_x, tpl2.object_y, tpl_width, tpl_height ) );
          //cvShowImage("Act",frame);
          cvReleaseImage( &tpl2.tpl );
          cvReleaseImage( &tpl2.tm_result );
          tpl2.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1), 
IPL_DEPTH_32F, 1 );
          tpl2.tpl=cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
          cvCopy(frame,tpl2.tpl);
          cvResetImageROI( frame );
          cnt_refresh=0;
        }
        
        tpl1.area=0;
        tpl2.area=0;
      }

      //! Main loop.
      void
      onMain(void)
      {

        tpl_width = 100;      /* template width       */
        tpl_height = 100;      /* template height      */
        window_search_width = 180;      /* search window width  */
        window_search_height = 180;      /* search window height */
        m_args.window_search_size = 180;
        m_args.tpl_size = 100;
        threshold = 1;
        cnt=0;
        tpl1.flag_track=0;
        tpl2.flag_track=0;
        m_args.rep_tpl=1;
        tpl1.max_area=10000;
        tpl1.min_area=30;
        tpl2.max_area=10000;
        tpl2.min_area=30;
        m_args.color_int=20;
        flag_tresh=0;
        flag_start=0;
        flag_stat_video=0;
        
        CvCapture *capture;
        //capture = cvCaptureFromCAM( 0 );
        //capture = cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg");
        capture=cvCaptureFromFile("http://10.0.3.31:8080/video.wmv");
        while ( capture==0 && cnt<4)
        {
          inf("\n\tERROR OPEN CAM\n");
          //capture = cvCaptureFromCAM( 0 );
          capture = cvCaptureFromFile("http://10.0.3.31:8080/video.wmv");
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
        tpl1.tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
        tpl2.tpl = cvCreateImage( cvSize( tpl_width, tpl_height ), frame->depth, frame->nChannels );
        /* create image for template matching result */
        tpl1.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1 ), 
IPL_DEPTH_32F, 1 );
        tpl2.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height + 1 ), 
IPL_DEPTH_32F, 1 );      
        //Window Name
        cvNamedWindow( "Live Video" , 0);
        cvResizeWindow( "Live Video" , 640, 480);
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
          if ( tpl1.is_tracking == 1 || tpl2.is_tracking == 1 ) 
            TrackObject();
            
          //Add information in frame
          time_acquisition();
          sprintf(text,"Dist. = %d px",abs(tpl1.object_x + (tpl_width/2) - tpl2.object_x + (tpl_width/2)));
          cvPutText(back, text, cvPoint(10, 20), &font, cvScalar(0, 255, 0, 0));
          sprintf(text,"Hour: %d:%d:%d",hour,min,sec);
          cvPutText(back, text, cvPoint(10, 42), &font, cvScalar(255, 255, 100, 0));
          sprintf(text,"Data: %d-%d-%d",day,mon,year);
          cvPutText(back, text, cvPoint(10, 64), &font, cvScalar(255, 255, 100, 0));
          text[0]='\0';
         
          //Save video
          if (flag_start == 1)
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
          cvCreateTrackbar("Refresh TPL in:", "Live Video", &m_args.rep_tpl, 12, 0);
          cvCreateTrackbar("Tpl Size", "Live Video", &m_args.tpl_size, frame_width-100, 0);
          cvCreateTrackbar("Window  Search Size", "Live Video", &m_args.window_search_size, frame_width-50, 0);
          cvCreateTrackbar("Color Interval", "Live Video", &m_args.color_int, 120, 0);
          cvCreateTrackbar("Blob Area", "Live Video", &m_args.area_size, 10000, 0);          
          
          tpl1.max_area = m_args.area_size;
          tpl2.max_area = m_args.area_size;
          
          //if size of window change
          if (window_search_height != m_args.window_search_size)
          {
            window_search_height = m_args.window_search_size;
            window_search_width = m_args.window_search_size;
            cvReleaseImage( &tpl1.tm_result );
            tpl1.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height+ 1 ), 
IPL_DEPTH_32F, 1);
            cvReleaseImage( &tpl2.tm_result );
            tpl2.tm_result = cvCreateImage( cvSize( window_search_width - tpl_width  + 1, window_search_height - tpl_height+ 1 ), 
IPL_DEPTH_32F, 1);
          }
          
          if ( m_args.window_search_size <= m_args.tpl_size)
            m_args.window_search_size = m_args.tpl_size+10;
          
          window_search_height = m_args.window_search_size;
          window_search_width = m_args.window_search_size;
          tpl_height = m_args.tpl_size;
          tpl_width = m_args.tpl_size;
            
          key=cvWaitKey(10);
            if ( key == 's' || key == 'S')
              save_image( back );
            if ( key == 't' || key == 'T')
              flag_tresh = !flag_tresh;
            if ( key == 'r' || key == 'R')
              flag_start = !flag_start;
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