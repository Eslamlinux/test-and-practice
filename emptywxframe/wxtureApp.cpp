#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "wxtureApp.h"
#include "id.h"
#include "Mainwindows.h"

IMPLEMENT_APP(myApp);

 myApp::myApp()
 {


 }

bool myApp::OnInit()
{
if(!wxApp::OnInit())
    return false;
    Mainwindows* TheMain = new Mainwindows(nullptr,window::id::MAINWINDOW,_("the first one"));
    TheMain->Show();
    return true;
}

 myApp::~myApp()
 {


 }
