#pragma once

class baseApp :
	public wxApp
{
public:
	baseApp();
	virtual ~baseApp();
	virtual bool OnInit() override;
};