//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* DlgCharCreate.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "UIDialog.h"
#include "TSingleton.h"
#include "UIDisplayModel.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CDlgCharCreate : public CUIDialog, public TSingleton<CDlgCharCreate>
{
public:
	void OnControlRegister();
protected:
	void OnBtnOk();
	void OnBtnExit();
	void OnBtnRole1();
	void OnBtnRole2();
	void OnBtnRole3();
protected:
	CUIDisplayRenderNode	m_DisplayModel;
	CUIStatic		m_StaProInfo;
	CUIEditBox		m_EdtName;
	int				m_nIndex;
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------