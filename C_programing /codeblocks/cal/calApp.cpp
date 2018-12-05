/***************************************************************
 * Name:      calApp.cpp
 * Purpose:   Code for Application Class
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#include "calApp.h"

//(*AppHeaders
#include "calMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(calApp);

bool calApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	calDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
