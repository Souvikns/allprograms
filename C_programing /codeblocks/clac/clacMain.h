/***************************************************************
 * Name:      clacMain.h
 * Purpose:   Defines Application Frame
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#ifndef CLACMAIN_H
#define CLACMAIN_H

//(*Headers(clacFrame)
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class clacFrame: public wxFrame
{
    public:

        clacFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~clacFrame();

    private:

        //(*Handlers(clacFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnRichTextCtrl1Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(clacFrame)
        static const long ID_RICHTEXTCTRL1;
        static const long ID_PANEL1;
        static const long ID_BUTTON1;
        static const long ID_CHOICE1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(clacFrame)
        wxRichTextCtrl* RichTextCtrl1;
        wxButton* Button1;
        wxPanel* Panel1;
        wxButton* Button2;
        wxButton* Button3;
        wxStatusBar* StatusBar1;
        wxChoice* Choice1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CLACMAIN_H
