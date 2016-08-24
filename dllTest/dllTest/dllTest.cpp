// dllTest.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "dllTest.h"


// 这是导出变量的一个示例
DLLTEST_API int ndllTest=0;

// 这是导出函数的一个示例。
DLLTEST_API int fndllTest(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 dllTest.h
CdllTest::CdllTest()
{
	return;
}
//DLLTEST_API int add_my(int a, int b)
//{
//	return a + b;
//}
