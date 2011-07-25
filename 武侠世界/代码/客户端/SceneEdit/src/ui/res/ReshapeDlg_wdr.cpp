//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: ReshapeDlg.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "ReshapeDlg_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "ReshapeDlg_wdr.h"


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

wxSizer *ReshapeDlg( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxBoxSizer *item0 = new wxBoxSizer( wxVERTICAL );

    wxGridSizer *item1 = new wxGridSizer( 2, 0, 0 );

    wxStaticText *item2 = new wxStaticText( parent, ID_TEXT, /*wxT("Left")*/wxT("左"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item2, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item3 = new wxTextCtrl( parent, ID_LEFTVALUE, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item1->Add( item3, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item4 = new wxStaticText( parent, ID_TEXT, /*wxT("Top")*/wxT("上"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item4, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item5 = new wxTextCtrl( parent, ID_TOPVALUE, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item1->Add( item5, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item6 = new wxStaticText( parent, ID_TEXT, /*wxT("Right")*/wxT("右"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item6, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item7 = new wxTextCtrl( parent, ID_RIGHTVALUE, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item1->Add( item7, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item8 = new wxStaticText( parent, ID_TEXT, /*wxT("Bottom")*/wxT("下"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item8, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item9 = new wxTextCtrl( parent, ID_BOTTOMVALUE, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item1->Add( item9, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item10 = new wxStaticText( parent, ID_TEXT, /*wxT("TextureName")*/wxT("贴图名称"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item10, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString strs11[] = 
    {
        wxT("ComboItem")
    };
    wxComboBox *item11 = new wxComboBox( parent, ID_TEXTURENAME, wxT(""), wxDefaultPosition, wxSize(100,-1), 1, strs11, wxCB_DROPDOWN );
    item1->Add( item11, 0, wxALIGN_CENTER|wxALL, 5 );

    wxButton *item12 = new wxButton( parent, wxID_OK, wxT("确定"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item12, 0, wxALIGN_CENTER|wxALL, 5 );

    wxButton *item13 = new wxButton( parent, wxID_CANCEL, wxT("取消"), wxDefaultPosition, wxDefaultSize, 0 );
    item1->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    item0->Add( item1, 0, wxALIGN_CENTER|wxALL, 5 );

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
