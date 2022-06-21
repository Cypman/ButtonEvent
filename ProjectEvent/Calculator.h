#pragma once
#include "wx\wx.h"
#include"cMain.h"
class Calculator: public wxApp
{
public:
	Calculator();
	//~Calculator();
private:
	cMain* m_calculate = nullptr;
	
public:
	virtual bool OnInit();

};

