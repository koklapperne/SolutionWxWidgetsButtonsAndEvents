#pragma once
#include "wx/wx.h"
class cMain : public wxFrame
{
public:
	// Constructor
	cMain();
	// Destructor
	~cMain();
public:
	// Panels
	wxPanel *m_panelTop = nullptr;
	wxPanel *m_panelCenterLeft = nullptr;
	wxPanel *m_panelCenterCenter = nullptr;
	wxPanel *m_panelCenterRight = nullptr;
	wxPanel *m_panelBottom = nullptr;
	// Buttons
	wxButton *m_newButton = nullptr;
	wxButton *m_okButton = nullptr;
	wxButton *m_cancelButton = nullptr;
	wxButton *m_closeButton = nullptr;
	// Other controls
	wxTextCtrl *m_textControlCenter=nullptr;
	wxListBox* m_listBoxCenter = nullptr;
	// Sizers
	wxBoxSizer *m_boxSizerVertical = nullptr;
	wxBoxSizer *m_boxSizerHorizontal = nullptr;
	// Events
	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
		
};

