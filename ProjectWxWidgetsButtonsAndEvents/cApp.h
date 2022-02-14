#pragma once
#include "wx/wx.h"
#include "cMain.h"
class cApp : public wxApp
{
public:
	// Constructor
	cApp();
	// Destructor
	~cApp();
	//
	bool OnInit();
private:
	cMain *m_frame = nullptr;
};

