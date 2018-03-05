#pragma once

// By default, class inheritance is private.  In this particular case,
// baseApp.cpp tries to Show HelloWindow object, cannot if wxFrame is private
class HelloWindow : public wxFrame
{
public:
	HelloWindow();
	virtual ~HelloWindow();
	void OnClick(wxCommandEvent& event);

private:
	wxStaticText * hello;
	wxButton* helloButton;
};