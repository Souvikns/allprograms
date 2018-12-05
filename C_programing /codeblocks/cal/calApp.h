/***************************************************************
 * Name:      calApp.h
 * Purpose:   Defines Application Class
 * Author:    souvik ()
 * Created:   2018-10-30
 * Copyright: souvik ()
 * License:
 **************************************************************/

#ifndef CALAPP_H
#define CALAPP_H

#include <wx/app.h>

class calApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // CALAPP_H
