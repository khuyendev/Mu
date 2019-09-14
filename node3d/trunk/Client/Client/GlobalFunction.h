//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* GlobalFunctions.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include "Manager.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

typedef struct lua_State lua_State;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void InitLua		(lua_State * L);
void LUA_MessageBox	(const wchar_t* wcsText, int nType=0);
void GameClose		();
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------