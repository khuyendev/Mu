//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* DlgMessageBox.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "UIDialog.h"
#include "TSingleton.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CDlgMessageBox : public CUIDialog, public TSingleton<CDlgMessageBox>
{
public:
	void OnControlRegister();
	void setMessage(const wchar_t* wszMessage, int nType=0);
protected:
	void OnBtnOK();
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------