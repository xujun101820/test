// dllTest.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "dllTest.h"


// ���ǵ���������һ��ʾ��
DLLTEST_API int ndllTest=0;

// ���ǵ���������һ��ʾ����
DLLTEST_API int fndllTest(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� dllTest.h
CdllTest::CdllTest()
{
	return;
}
//DLLTEST_API int add_my(int a, int b)
//{
//	return a + b;
//}
