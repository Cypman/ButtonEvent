#include "Calculator.h"
#include"wx\wx.h"
wxIMPLEMENT_APP(Calculator);
Calculator::Calculator(){}
//Calculator::~Calculator(){}
bool Calculator::OnInit() {
	m_calculate = new cMain();
	m_calculate->Show();
	return true;
}
