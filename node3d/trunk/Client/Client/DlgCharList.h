//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* DlgCharList.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "UIDialog.h"
#include "TSingleton.h"
#include "SceneEffect.h""
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CDlgCharList : public CUIDialog, public TSingleton<CDlgCharList>
{
public:
	void OnControlRegister();
	virtual void SetVisible(bool bVisible);
protected:
	void OnBtnOk();
	void OnBtnBack();
	void OnBtnCharCreate();
	void OnBtnCharDelete();
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------