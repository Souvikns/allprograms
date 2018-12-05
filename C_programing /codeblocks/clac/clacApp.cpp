/***************************************************************
 * Name:      clacApp.cpp
 * Purpose:   Code for Application Class
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#include "clacApp.h"

//(*AppHeaders
#include "clacMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(clacApp);

bool clacApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	clacFrame* Frame = new clacFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
