#include "wx/wxprec.h"
#include "HelloWindow.h"

enum {
	ID_STATIC = 2001,
	ID_HELLO
};


HelloWindow::HelloWindow() : wxFrame(nullptr, wxID_ANY, L"Hello World!")
{
	hello = new wxStaticText(this, ID_STATIC, L"", { 100, 50 }, { 250, 20 });
	helloButton = new wxButton(this, ID_HELLO, L"Hello", { 150, 100 });
	helloButton->Bind(wxEVT_BUTTON, &HelloWindow::OnClick, this);
}

HelloWindow::~HelloWindow()
{

}

void HelloWindow::OnClick(wxCommandEvent& event)
{
	hello->SetLabelText(L"Hello World, I want to get off.");
	helloButton->Enable(false);
}

