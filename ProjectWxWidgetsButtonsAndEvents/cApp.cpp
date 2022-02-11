#include "cApp.h"
// Macro
wxIMPLEMENT_APP(cApp);
cApp::cApp() {
	// 09-02-2022 10.44
}

cApp::~cApp() {
	// 09-02-2022 10.56
}

bool cApp::OnInit() {
	// 09-02-2022 10.59
	m_frame = new cMain();
	m_frame->Show();
	//
	return true;
}