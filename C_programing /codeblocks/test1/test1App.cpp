/***************************************************************
 * Name:      test1App.cpp
 * Purpose:   Code for Application Class
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#include "test1App.h"

//(*AppHeaders
#include "test1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(test1App);

bool test1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	test1Dialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
