/***************************************************************
 * Name:      calculatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#include "calculatorApp.h"

//(*AppHeaders
#include "calculatorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(calculatorApp);

bool calculatorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	calculatorDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
