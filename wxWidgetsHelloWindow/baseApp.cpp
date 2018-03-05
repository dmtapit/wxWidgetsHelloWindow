#include <wx/wxprec.h>
#include "baseApp.h"
#include "HelloWindow.h"

#ifdef _DEBUG
#pragma comment(lib, "wxbase31ud.lib")
#else
#pragma comment(lib, "wxbase31u.lib")
#endif
baseApp::baseApp()
{

}

baseApp::~baseApp()
{

}

bool baseApp::OnInit()
{
	//wxFrame* mainFrame = new wxFrame(nullptr, wxID_ANY, L"base");
	HelloWindow* mainFrame = new HelloWindow();
	mainFrame->Show(true);
	return true;
}

wxIMPLEMENT_APP(baseApp);