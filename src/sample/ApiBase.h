﻿#pragma once
#include "../../../YaizuComLib/src/stkwebapp/StkWebAppExec.h"

class ApiBase : public StkWebAppExec
{
public:
	virtual StkObject* Execute(StkObject*, int, wchar_t[StkWebAppExec::URL_PATH_LENGTH], int*, wchar_t[3], wchar_t*);
};
