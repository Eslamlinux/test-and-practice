/***************************************************************
 * Name:      tutorial6Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2025-10-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "tutorial6Main.h"
#include <wx/msgdlg.h>
#include <iostream>
#include <wx/colordlg.h>

//(*InternalHeaders(tutorial6Frame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(tutorial6Frame)
const long tutorial6Frame::ID_STATICTEXT1 = wxNewId();
const long tutorial6Frame::ID_BUTTON1 = wxNewId();
const long tutorial6Frame::ID_TEXTCTRL1 = wxNewId();
const long tutorial6Frame::ID_BUTTON2 = wxNewId();
const long tutorial6Frame::ID_GAUGE1 = wxNewId();
const long tutorial6Frame::ID_BUTTON3 = wxNewId();
const long tutorial6Frame::ID_STATICTEXT2 = wxNewId();
const long tutorial6Frame::ID_SLIDER1 = wxNewId();
const long tutorial6Frame::ID_STATICTEXT3 = wxNewId();
const long tutorial6Frame::ID_BUTTON4 = wxNewId();
const long tutorial6Frame::ID_PANEL1 = wxNewId();
const long tutorial6Frame::idMenuQuit = wxNewId();
const long tutorial6Frame::idMenuAbout = wxNewId();
const long tutorial6Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(tutorial6Frame,wxFrame)
    //(*EventTable(tutorial6Frame)
    //*)
END_EVENT_TABLE()

tutorial6Frame::tutorial6Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(tutorial6Frame)
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableCol(1);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Change Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Read Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Gauge1 = new wxGauge(Panel1, ID_GAUGE1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_GAUGE1"));
    FlexGridSizer1->Add(Gauge1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Change progress"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Font Size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider1 = new wxSlider(Panel1, ID_SLIDER1, 0, 0, 90, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER1"));
    FlexGridSizer1->Add(Slider1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Color"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("Change"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    FlexGridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(FlexGridSizer1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&tutorial6Frame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&tutorial6Frame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&tutorial6Frame::OnButton3Click);
    Connect(ID_SLIDER1,wxEVT_SCROLL_THUMBTRACK,(wxObjectEventFunction)&tutorial6Frame::OnSlider1CmdScrollThumbTrack);
    Connect(ID_SLIDER1,wxEVT_SCROLL_THUMBRELEASE,(wxObjectEventFunction)&tutorial6Frame::OnSlider1CmdScrollThumbRelease);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&tutorial6Frame::OnButton4Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&tutorial6Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&tutorial6Frame::OnAbout);
    //*)
}

tutorial6Frame::~tutorial6Frame()
{
    //(*Destroy(tutorial6Frame)
    //*)
}

void tutorial6Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void tutorial6Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void tutorial6Frame::OnButton1Click(wxCommandEvent& event)
{
    StaticText1->SetLabel(_("The Label is changed"));
    Layout();
}

void tutorial6Frame::OnButton2Click(wxCommandEvent& event)
{
    wxString textval = TextCtrl1->GetValue();
    std::string userMsg = "you entered \n";
    wxMessageBox(_(userMsg)+textval);
}

void tutorial6Frame::OnButton3Click(wxCommandEvent& event)
{
    int Newval = Gauge1->GetValue() +10;
    Newval > 100 ? Newval = 0 : Newval;
    Gauge1->SetValue(Newval);
}

void tutorial6Frame::OnSlider1CmdScrollThumbTrack(wxScrollEvent& event)
{
    wxFont font = StaticText2->GetFont();
    font.SetPointSize( Slider1->GetValue() );
    StaticText2->SetFont(font);
}

void tutorial6Frame::OnSlider1CmdScrollThumbRelease(wxScrollEvent& event)
{
    Layout();
    Panel1->GetSizer()->SetSizeHints(this);
}

void tutorial6Frame::OnButton4Click(wxCommandEvent& event)
{
    wxColor oldone ,newone;
    oldone = StaticText3->GetForegroundColour();
    newone = wxGetColourFromUser(this,oldone);

    if(newone.IsOk()){
            StaticText3->SetForegroundColour(newone);
            Refresh();
    }
}
