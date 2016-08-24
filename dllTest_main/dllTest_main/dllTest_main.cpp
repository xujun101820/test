// dllTest_main.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <conio.h>
#include "DllCreate.h"
#include "out.h"
//#include "../../dllTest/dllTest/dllTest.h"
//#pragma comment(lib,"dllTest.lib")
typedef int(*Addmy)();
typedef void(WINAPI *PCTOR)();
int main()
{
	if (0)
	{
		HINSTANCE hdll = NULL;
		hdll = LoadLibraryA(("E:\\study\\C++code\\DllCreate\\Release\\DllCreate.dll"));
		CDllCreate *pCDllCreate = (CDllCreate *)malloc(sizeof(CDllCreate));
		//pCDllCreate.
		PCTOR pctor = (PCTOR)GetProcAddress(hdll, "CDllCreate");
		//pctor
			Addmy add_my = (Addmy)GetProcAddress(hdll, "fnDllCreate");
		if (add_my == NULL)
			printf("未找到函数");
		int a = add_my();
	}
	string file_vis = "E:/FinalDB_NEW/红外战术目标/车/真实数据/可见光/122.tif";
	string file_lwir = "E:\\FinalDB_NEW\\红外战术目标\\车\\真实数据\\红外\\134.tif";
	string file_sar = "f:\\lib\\GA\\sort_by_target\\tank_car\\sar\\4.tif";
	string img_out = "final_out.tif";
	string txt_out = "final_out.txt";
	//detectCar_vis(file_vis,img_out, txt_out);
	detectCar_vis(file_vis, img_out, txt_out);
	system("pause");
	return 0;
}

