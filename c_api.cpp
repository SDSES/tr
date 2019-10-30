// c_api.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <tchar.h>

typedef int(*tr_init_p)(void);
int main()
{
	
	SetCurrentDirectory(_T("D:\\OCR\\example-app1\\c_api\\c_api\\x64\\Release\\tr"));
	HINSTANCE hDLL = LoadLibrary(_T("libtr.dll"));
	if (hDLL == NULL) {
		printf("error");
		return 0;
	}
	tr_init_p tr_init = (tr_init_p)GetProcAddress(hDLL, "tr_init");
	int ret = tr_init();
	printf("ret %d\n", ret);
}
