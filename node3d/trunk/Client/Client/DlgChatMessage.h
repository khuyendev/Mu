//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* DlgChatMessage.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "UIDialog.h"
#include "TSingleton.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CDlgChatMessage : public CUIDialog, public TSingleton<CDlgChatMessage>
{
public:
	void OnControlRegister();
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------