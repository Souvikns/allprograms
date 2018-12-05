/***************************************************************
 * Name:      test1Main.h
 * Purpose:   Defines Application Frame
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#ifndef TEST1MAIN_H
#define TEST1MAIN_H

//(*Headers(test1Dialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/checklst.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class test1Dialog: public wxDialog
{
    public:

        test1Dialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~test1Dialog();

    private:

        //(*Handlers(test1Dialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(test1Dialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_CHECKLISTBOX1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(test1Dialog)
        wxButton* Button1;
        wxCheckListBox* CheckListBox1;
        wxStaticText* StaticText1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxBoxSizer* BoxSizer1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TEST1MAIN_H
