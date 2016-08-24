// DllCreate.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "DllCreate.h"


// 这是导出变量的一个示例
DLLCREATE_API int nDllCreate=0;

// 这是导出函数的一个示例。
int fnDllCreate(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 DllCreate.h
CDllCreate::CDllCreate()
{
	return;
}
int CDllCreate::add_my(int a, int b)
{
	return a + b;
}
