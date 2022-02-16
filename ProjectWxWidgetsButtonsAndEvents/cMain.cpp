#include "cMain.h"
#include "wx/artprov.h"
// Macro for event handling, must be in the top of the cpp-file!
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnNewButtonClicked)
	EVT_BUTTON(10002, OnOkButtonClicked)
	EVT_BUTTON(10003, OnCancelButtonClicked)
	EVT_BUTTON(10004, OnCloseButtonClicked)
wxEND_EVENT_TABLE()
// Constructor
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Buttons and events:", wxPoint(30, 30), wxSize(800, 600)) {
	// 14-02-2022 14.40
	// File menu
	m_menuFile = new wxMenu();
	m_menuFile->Append(wxID_OPEN, _T("&Open"));
	m_menuFile->Append(wxID_SAVE, _T("&Save"));
	m_menuFile->AppendSeparator();
	m_menuFile->Append(wxID_EXIT, _T("&Quit"));
	// About menu
	m_menuHelp = new wxMenu();
	m_menuHelp->Append(wxID_ABOUT, _T("&About"));
	// Menu bar
	m_menuBar = new wxMenuBar();
	m_menuBar->Append(m_menuFile, _T("&File"));
	m_menuBar->Append(m_menuHelp, _T("&Help"));
	//
	SetMenuBar(m_menuBar);
	//
	// Panels
	m_panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelTop->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelCenterLeft = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelCenterLeft->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelCenterCenter = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 150));
	m_panelCenterCenter->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelCenterRight = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelCenterRight->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelBottom->SetBackgroundColour(wxColor(30, 30, 30));
	// Buttons on m_panelCenterLeft
	m_newButton = new wxButton(m_panelCenterLeft, 10001, "New", wxPoint(10, 10), wxSize(130, 40));
	m_okButton = new wxButton(m_panelCenterLeft, 10002, "Ok", wxPoint(10, 60), wxSize(130, 40));
	m_cancelButton = new wxButton(m_panelCenterLeft, 10003, "Cancel", wxPoint(10, 110), wxSize(130, 40));
	m_closeButton = new wxButton(m_panelCenterLeft, 10004, "Close", wxPoint(10, 160), wxSize(130, 40));
	// other controls on m_panelCenterCenter
	m_textControlCenter = new  wxTextCtrl(m_panelCenterCenter, wxID_ANY, "", wxPoint(10, 10), wxSize(300, 40));
	m_listBoxCenter = new wxListBox(m_panelCenterCenter, wxID_ANY, wxPoint(10, 60), wxSize(300, 300));
	// Sizers
	// m_boxSizerHorizontal
	m_boxSizerHorizontal = new wxBoxSizer(wxHORIZONTAL);
	m_boxSizerHorizontal->Add(m_panelCenterLeft, 0, wxEXPAND  | wxRIGHT , 10);
	m_boxSizerHorizontal->Add(m_panelCenterCenter, 1, wxEXPAND  | wxRIGHT  , 10);
	m_boxSizerHorizontal->Add(m_panelCenterRight, 0, wxEXPAND , 10);
	// m_boxSizerVertical
	m_boxSizerVertical = new wxBoxSizer(wxVERTICAL);
	m_boxSizerVertical->Add(m_panelTop, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_boxSizerHorizontal, 1, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_panelBottom, 0, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	// Use m_boxSizerVertical on the frame 
	this->SetSizerAndFit(m_boxSizerVertical);
	// Maximize frame
	this->Maximize();
}
// Destructor
cMain::~cMain() {
	// 09-02-2022 10.56
}
// Events
void cMain::OnNewButtonClicked(wxCommandEvent& evt){
	// 13-02-2022 16.48
	m_listBoxCenter->Append(m_textControlCenter->GetValue());
	evt.Skip();
}
void cMain::OnCancelButtonClicked(wxCommandEvent& evt) {
	// 16-02-2022 11.23
	m_cancelDialog = new wxDialog(this, wxID_ANY, "Dialog: Cancel", wxDefaultPosition, wxSize(400, 200));
	//m_cancelDialog = new wxMessageDialog(this, wxT("Dialog: Cancel"), wxT("Message:"), wxCANCEL);
	m_cancelDialog->CenterOnParent();
	m_cancelDialog->ShowModal();
	evt.Skip();
}
void cMain::OnOkButtonClicked(wxCommandEvent& evt) {
	// 16-02-2022 11.23
	m_okDialog = new wxDialog(this, wxID_ANY, "Dialog: Ok", wxDefaultPosition, wxSize(400, 200));
	// m_okDialog = new wxMessageDialog(this, wxID_ANY, "Dialog: Ok", wxDefaultPosition, wxSize(400, 200));
	m_okDialog->CenterOnParent();
	m_okDialog->ShowModal();
	evt.Skip();
}
void cMain::OnCloseButtonClicked(wxCommandEvent& evt) {
	// 16-02-2022 11.23
	m_closeDialog = new wxDialog(this, wxID_ANY, "Dialog: Close", wxDefaultPosition, wxSize(400, 200));
	//m_closeDialog = new wxMessageDialog(this, wxT("Dialog: Close"), wxT("Message:"), wxCLOSE);
	m_closeDialog->CenterOnParent();
	m_closeDialog->ShowModal();
	this->Close();
	evt.Skip();
}
