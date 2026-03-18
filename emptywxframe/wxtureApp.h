#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class myApp : public wxApp
{
    public:

        myApp();
        bool OnInit();
        ~myApp();
};

DECLARE_APP(myApp);
