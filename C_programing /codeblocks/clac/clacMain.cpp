/***************************************************************
 * Name:      clacMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#include "clacMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(clacFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(clacFrame)
const long clacFrame::ID_RICHTEXTCTRL1 = wxNewId();
const long clacFrame::ID_PANEL1 = wxNewId();
const long clacFrame::ID_BUTTON1 = wxNewId();
const long clacFrame::ID_CHOICE1 = wxNewId();
const long clacFrame::ID_BUTTON2 = wxNewId();
const long clacFrame::idMenuQuit = wxNewId();
const long clacFrame::idMenuAbout = wxNewId();
const long clacFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(clacFrame,wxFrame)
    //(*EventTable(clacFrame)
    //*)
END_EVENT_TABLE()

clacFrame::clacFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(clacFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    RichTextCtrl1 = new wxRichTextCtrl(this, ID_RICHTEXTCTRL1, _("Text"), wxPoint(0,0), wxSize(216,394), wxRE_MULTILINE, wxDefaultValidator, _T("ID_RICHTEXTCTRL1"));
    wxRichTextAttr rchtxtAttr_1;
    rchtxtAttr_1.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(16,64), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(0,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Choice1 = new wxChoice(this, ID_CHOICE1, wxPoint(656,56), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Label"), wxPoint(0,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&clacFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&clacFrame::OnAbout);
    //*)
}

clacFrame::~clacFrame()
{
    //(*Destroy(clacFrame)
    //*)
}

void clacFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void clacFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
