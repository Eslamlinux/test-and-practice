/***************************************************************
 * Name:      tutorial6App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2025-10-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "tutorial6App.h"

//(*AppHeaders
#include "tutorial6Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(tutorial6App);

bool tutorial6App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        tutorial6Frame* Frame = new tutorial6Frame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
