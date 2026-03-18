/***************************************************************
 * Name:      tutorial6Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2025-10-13
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TUTORIAL6MAIN_H
#define TUTORIAL6MAIN_H

//(*Headers(tutorial6Frame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/slider.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class tutorial6Frame: public wxFrame
{
    public:

        tutorial6Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~tutorial6Frame();

    private:

        //(*Handlers(tutorial6Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnSlider1CmdScrollThumbTrack(wxScrollEvent& event);
        void OnSlider1CmdScrollThumbRelease(wxScrollEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(tutorial6Frame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON2;
        static const long ID_GAUGE1;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT2;
        static const long ID_SLIDER1;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON4;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(tutorial6Frame)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxGauge* Gauge1;
        wxPanel* Panel1;
        wxSlider* Slider1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TUTORIAL6MAIN_H
