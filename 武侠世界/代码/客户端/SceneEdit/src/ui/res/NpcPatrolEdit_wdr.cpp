//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: NpcPatrolEdit.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "NpcPatrolEdit_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "NpcPatrolEdit_wdr.h"

#include <wx/intl.h>

// Euro sign hack of the year
#if wxUSE_UNICODE
    #define __WDR_EURO__ wxT("\u20ac")
#else
    #if defined(__WXMAC__)
        #define __WDR_EURO__ wxT("\xdb")
    #elif defined(__WXMSW__)
        #define __WDR_EURO__ wxT("\x80")
    #else
        #define __WDR_EURO__ wxT("\xa4")
    #endif
#endif

// Implement window functions

wxSizer *EditRegionDlg( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxBoxSizer *item0 = new wxBoxSizer( wxVERTICAL );

    wxStaticText *item1 = new wxStaticText( parent, ID_TEXT, /*_("Region")*/_("区域"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxString strs2[] = 
    {
        _("ListItem")
    };
    wxListBox *item2 = new wxListBox( parent, ID_LISTBOX_LINE, wxDefaultPosition, wxSize(220,100), 1, strs2, wxLB_SINGLE );
    item0->Add( item2, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxStaticText *item3 = new wxStaticText( parent, ID_TEXT, /*_("point")*/_("点"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxString *strs4 = (wxString*) NULL;
    wxListBox *item4 = new wxListBox( parent, ID_LISTBOX_POINT, wxDefaultPosition, wxSize(220,100), 0, strs4, wxLB_SINGLE );
    item0->Add( item4, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item5 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item6 = new wxButton( parent, ID_BN_ADD_NEW_LINE, /*_("AddNewLine")*/_("添加新线路"), wxDefaultPosition, wxDefaultSize, 0 );
    item5->Add( item6, 0, wxALIGN_CENTER|wxALL, 0 );

    wxButton *item7 = new wxButton( parent, ID_BUTTON_DEL_LINE, /*_("DelLine")*/_("删除线路"), wxDefaultPosition, wxDefaultSize, 0 );
    item5->Add( item7, 0, wxALIGN_CENTER|wxALL, 0 );

    item0->Add( item5, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item8 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item9 = new wxButton( parent, ID_BUTTON_LINE_OK, /*_("LineOk")*/_("创建线路"), wxDefaultPosition, wxDefaultSize, 0 );
    item8->Add( item9, 0, wxALIGN_CENTER|wxALL, 0 );

    wxButton *item10 = new wxButton( parent, ID_BUTTON_DEL_POINT, /*_("DelPoint")*/_("删除点"), wxDefaultPosition, wxDefaultSize, 0 );
    item8->Add( item10, 0, wxALIGN_CENTER|wxALL, 0 );

    item0->Add( item8, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item11 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer *item12 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item13 = new wxStaticText( parent, ID_TEXT, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
    item12->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item14 = new wxTextCtrl( parent, ID_POINT_X, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item12->Add( item14, 0, wxALIGN_CENTER|wxALL, 5 );

    item11->Add( item12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item15 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item16 = new wxStaticText( parent, ID_TEXT, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
    item15->Add( item16, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item17 = new wxTextCtrl( parent, ID_POINT_Y, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item15->Add( item17, 0, wxALIGN_CENTER|wxALL, 5 );

    wxCheckBox *item18 = new wxCheckBox( parent, ID_IFY, wxT(""), wxDefaultPosition, wxDefaultSize, 0 );
    item15->Add( item18, 0, wxALIGN_CENTER|wxALL, 5 );

    item11->Add( item15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item19 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item20 = new wxStaticText( parent, ID_TEXT, _("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
    item19->Add( item20, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item21 = new wxTextCtrl( parent, ID_POINT_Z, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item19->Add( item21, 0, wxALIGN_CENTER|wxALL, 5 );

    item11->Add( item19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    item0->Add( item11, 0, wxALIGN_CENTER|wxALL, 5 );

    wxBoxSizer *item22 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item23 = new wxStaticText( parent, ID_TEXT, /*_("Distance:")*/_("距离:"), wxDefaultPosition, wxDefaultSize, 0 );
    item22->Add( item23, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item24 = new wxTextCtrl( parent, ID_DISTANCE, _("0"), wxDefaultPosition, wxSize(80,-1), 0 );
    item22->Add( item24, 0, wxALIGN_CENTER|wxALL, 5 );

    item0->Add( item22, 0, wxALIGN_CENTER|wxALL, 5 );

    if (set_sizer)
    {
        parent->SetSizer( item0 );
        if (call_fit)
            item0->SetSizeHints( parent );
    }
    
    return item0;
}

// Implement menubar functions

// Implement toolbar functions

// Implement bitmap functions


// End of generated file
