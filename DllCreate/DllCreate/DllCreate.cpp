// DllCreate.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "DllCreate.h"


// ���ǵ���������һ��ʾ��
DLLCREATE_API int nDllCreate=0;

// ���ǵ���������һ��ʾ����
int fnDllCreate(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DllCreate.h
CDllCreate::CDllCreate()
{
	return;
}
int CDllCreate::add_my(int a, int b)
{
	return a + b;
}
