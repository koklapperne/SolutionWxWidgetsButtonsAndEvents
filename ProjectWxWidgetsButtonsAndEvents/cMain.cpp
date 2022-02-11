#include "cMain.h"
// Constructor
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Buttons and events:", wxPoint(30, 30), wxSize(800, 600)) {
	// 09-02-2022 10.44
	// Declaring local variables
	// Panel for buttons
	m_panelForButtonsTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 50));
	m_panelForButtonsTop->SetBackgroundColour(wxColor(30, 30, 30));
	m_panelForButtonsBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 50));
	m_panelForButtonsBottom->SetBackgroundColour(wxColor(30, 30, 30));
	// Buttons
	m_newButton = new wxButton(this, wxID_ANY, "New", wxPoint(10, 10), wxSize(150, 50));
	m_okButton = new wxButton(this, wxID_ANY, "Ok", wxPoint(10, 60), wxSize(150, 50));
	m_cancelButton = new wxButton(this, wxID_ANY, "Cancel", wxPoint(10, 110), wxSize(150, 50));
	m_closeButton = new wxButton(this, wxID_ANY, "Close", wxPoint(10, 160), wxSize(150, 50));
	// Panel for content
	m_panelForContent = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 50));
	m_panelForContent->SetBackgroundColour(wxColor(30, 30, 30));
	// panel for content controls
	m_panelForContentControls = new wxPanel(m_panelForContent, wxID_ANY, wxDefaultPosition, wxSize(150, 50));
	m_panelForContentControls->SetBackgroundColour(wxColor(100, 200, 100));
	// m_wxBoxSizerAll
	m_wxBoxSizerAll = new wxBoxSizer(wxHORIZONTAL);
	// this->SetSizer(m_wxBoxSizerAll);
	// m_wxBoxSizerButtons
	m_wxBoxSizerButtons = new wxBoxSizer(wxVERTICAL);
	// Add top panel for buttons
	m_wxBoxSizerButtons->Add(m_panelForButtonsTop, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// Add buttons
	m_wxBoxSizerButtons->Add(m_newButton, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	m_wxBoxSizerButtons->Add(m_okButton, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	m_wxBoxSizerButtons->Add(m_cancelButton, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	m_wxBoxSizerButtons->Add(m_closeButton, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// Add bottom panel for buttons
	m_wxBoxSizerButtons->Add(m_panelForButtonsBottom, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// Add m_wxBoxSizerButtons to m_wxBoxSizerAll
	m_wxBoxSizerAll->Add(m_wxBoxSizerButtons, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// m_wxBoxSizerContent
	m_wxBoxSizerContent = new wxBoxSizer(wxVERTICAL);
	// Add panel for content 
	m_wxBoxSizerContent->Add(m_panelForContent, 1, wxEXPAND | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// **Nested panel**
	// m_wxBoxSizerContentControls
	m_wxBoxSizerContentControls = new wxBoxSizer(wxHORIZONTAL);
	// Add m_panelForContentControls
	m_wxBoxSizerContentControls->Add(m_panelForContentControls, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	// Use m_wxBoxSizerContentControls on m_panelForContentControls
	m_panelForContentControls->SetSizer(m_wxBoxSizerContentControls);
	// ** End for nested panel **
	// Add m_wxBoxSizerContent to m_wxBoxSizerAll
	m_wxBoxSizerAll->Add(m_wxBoxSizerContent, 1, wxEXPAND  | wxRIGHT | wxTOP | wxBOTTOM, 5);
	// use m_wxBoxSizerAll on m_frame
	this->SetSizer(m_wxBoxSizerAll);
	// Maximize m_frame
	this->Maximize();
}
// Destructor
cMain::~cMain() {
	// 09-02-2022 10.56
}
