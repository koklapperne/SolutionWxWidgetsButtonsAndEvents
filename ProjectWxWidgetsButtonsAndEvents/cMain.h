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
	// Data members
	// Panels for buttons
	wxPanel* m_panelForButtonsTop = nullptr;
	wxPanel* m_panelForButtonsBottom = nullptr;
	// Panel for content
	wxPanel* m_panelForContent = nullptr;
	// Panel to simulate content controls
	wxPanel* m_panelForContentControls = nullptr;
	// Buttons
	wxButton* m_newButton = nullptr;
	wxButton* m_okButton = nullptr;
	wxButton* m_cancelButton = nullptr;
	wxButton* m_closeButton = nullptr;
	// Sizers
	wxSizer* m_wxBoxSizerAll = nullptr;
	wxSizer* m_wxBoxSizerContentControls = nullptr;
	wxSizer* m_wxBoxSizerContent = nullptr;
	wxSizer* m_wxBoxSizerButtons = nullptr;
	/*
	// Panels
	wxPanel* m_panelForButtonsTop = nullptr;
	wxPanel* m_panelForButtonsBottom = nullptr;
	wxPanel* m_panelForContent = nullptr;
	// Buttons
	wxButton* m_newButton = nullptr;
	wxButton* m_okButton = nullptr;
	wxButton* m_cancelButton = nullptr;
	wxButton* m_closeButton = nullptr;
	// Sizers
	wxBoxSizer* m_sizerVerticalForButtons = nullptr;
	wxSizer* m_sizerHorizontalAll = nullptr;
	*/
};

