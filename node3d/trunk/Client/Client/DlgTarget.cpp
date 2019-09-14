#include "DlgTarget.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void CDlgTarget::setTargetName(const wchar_t* wszName)
{
	CUIControl* pControl = getControl("IDC_TARGET_NAME");
	if (pControl)
	{
		wchar_t wszTargetName[255];
		swprintf(wszTargetName,L"[align=center]%s[/align]",wszName);
		pControl->SetText(wszTargetName);
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------