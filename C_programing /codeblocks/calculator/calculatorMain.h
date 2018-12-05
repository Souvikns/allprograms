/***************************************************************
 * Name:      calculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#ifndef CALCULATORMAIN_H
#define CALCULATORMAIN_H

//(*Headers(calculatorDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class calculatorDialog: public wxDialog
{
    public:

        calculatorDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~calculatorDialog();

    private:

        //(*Handlers(calculatorDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(calculatorDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(calculatorDialog)
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxBoxSizer* BoxSizer1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATORMAIN_H
