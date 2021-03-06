// SafeCodeProject.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StrSafe.h"
#include "MemPool.h"
#include "MathSafe.h"
#include "LogSafe.h"
#include <iostream>
#include <thread>
// #include <string>
using namespace std;
// 测试函数 生成txt文件为7.48MB
void ThreadFun()
{
	int i = 10000;
	while (i--)
	{
		logStr((char *)"Normal", (char *)"Start Normal Testing...");
		logStr((char *)"Warning", (char *)"Start Warning Testing...");
		logStr((char *)"Alert", (char *)"Start Alert Testing...");
		logStr((char *)"Error", (char *)"Start Error Testing...");
	}
}
int main()
{
	// 第五个函数
	/*
	// 注意，多线程工作，命令行显示请按任意键继续...时，不能关闭，要等待文件大小不变时才表示多线程运行结束 否则可能会报错(这个偶尔报过错==不确定)
	char s[] = "D://LogSafe.txt";
	initLog(s);
	// 多线程
	thread task01(ThreadFun);
	thread task02(ThreadFun);
	thread task03(ThreadFun);
	thread task04(ThreadFun);
	task01.detach();
	task02.detach();
	task03.detach();
	task04.detach();
	*/
	// 第四次实验

	// 4-1

	/*
	char t[100];
	while (1)
	{
	int* of = new int;
	int s;
	// cin遇到空格或回车停止
	// cin >> t;
	cin.getline(t, 100);
	s = my_atoi8(t, of);
	cout << s << " " << *of << endl;
	}
	*/

	// 4-2

	/*
	int res;
	int *of = new int;
	cout << "-----1-----" << endl;
	res = iAdd_Safe(12, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iAdd_Safe(127, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iAdd_Safe(-12, -13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iAdd_Safe(-127, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iAdd_Safe(127, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iAdd_Safe(-126, -13, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----2-----" << endl;
	res = iSubtract_Safe(12, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iSubtract_Safe(127, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iSubtract_Safe(-12, -13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iSubtract_Safe(-127, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iSubtract_Safe(127, -1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iSubtract_Safe(-126, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-----" << endl;
	res = iMultiply_Safe(2, 30, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(127, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(-2, 30, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(-12, -3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(-128, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(127, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(-28, 6, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iMultiply_Safe(-128, -1, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----4-----" << endl;
	res = iDivide_Safe(127, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(-28, 7, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(-128, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(-128, -1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(127, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(-28, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = iDivide_Safe(-128, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	*/

	// 4-3

	/*
	int res;
	int* of = new int;
	cout << "-----3-1-----" << endl;
	res = Add_Safe(12, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(255, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(132, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(255, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(124, 123, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-2-----" << endl;
	res = Subtract_Safe(17, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(127, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(232, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(127, 128, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(2, 255, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-3-----" << endl;
	res = Multiply_Safe(2, 30, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(127, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(122, 2, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(127, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(28, 26, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-4-----" << endl;
	res = Divide_Safe(234, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Divide_Safe(228, 7, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Divide_Safe(228, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	*/

	// 第三次实验

	/*
	int res;
	res = initPool(8);
	cout << res << endl;
	char* buf = allocBlock();
	cout << &buf << endl;
	cout << "------------------" << endl;
	int res1 = getBlockCount(), res2 = getAvailableBlockCount();
	cout << res1 << " " << res2 << endl;
	char* buf1 = allocBlock();
	char* buf2 = allocBlock();
	cout << &buf1 << " " << &buf2 << endl;
	res2 = getAvailableBlockCount();
	cout << res2 << endl;
	cout << "------------------" << endl;
	char* p = NULL;
	int t = freeBlock(p);
	cout << t << endl;
	cout << "------------------" << endl;
	freeBlock(buf1);
	res1 = getBlockCount();
	res2 = getAvailableBlockCount();
	cout << &buf1 << " " << &buf2 << endl;
	cout << res1 << " " << res2 << endl;
	for (int i = 0; i < 256; ++i)
	{
	cout << "buf[" << i << "]:" << int(buf[i]) << endl;
	}
	cout << "------------------" << endl;
	int t1 = freePool();
	cout << t1 << endl;
	freePoolForce();
	t1 = freePool();
	cout << t1 << endl;
	res1 = getBlockCount();
	res2 = getAvailableBlockCount();
	cout << res1 << " " << res2 << endl;
	*/

	// 第二次实验

	// 2-1

	/*
	char buf[8];
	int t;
	char dest[8];
	char src[] = "12345";
	while (1)
	{
	// t = gets_safe(buf, sizeof(buf));
	t = strcpy_safe(dest, sizeof(dest), src);
	cout << t << endl;
	}
	*/

	// 2-2

	/*
	char dest[8];
	int res;
	int i = 0;
	while (i++<3)
	{
	char* src = new char[8];
	cin >> src;
	res = strcpy_safe(dest, sizeof(dest), src);
	cout << res << endl;
	}

	char ss1[] = "1234567";
	res = strcpy_safe(0, 8, ss1);
	cout << res << endl;

	char ss2[] = "1234567";
	res = strcpy_safe(dest, sizeof(ss2), 0);
	cout << res << endl;

	char ss3[] = "12345678";
	res = strcpy_safe(dest, 0, ss3);
	cout << res << endl;
	*/

	// 第一次实验

	/*
	// 针对于string
	string a[7];
	for (int i = 0; i < 7; ++i)
	{
	getline(cin, a[i]);
	cout << i << ":" << isUsernameOK1(a[i]) << endl;
	}
	*/

	/*
	// 针对于形参为const char*
	cout << isUsernameOK("a12345678") << endl;
	cout << isUsernameOK("a123") << endl;
	cout << isUsernameOK("a123bcdefg4567890") << endl;
	cout << isUsernameOK("") << endl;

	//cout << isUsernameOK(0) << endl;

	cout << isUsernameOK("123456789") << endl;
	cout << isUsernameOK("abcdefghijk") << endl;
	*/

	/*
	// 针对于形参为char*
	while (1)
	{
	char c[100000];
	cin >> c;
	cout << isUsernameOK(c) << endl;
	}

	//char b[] = "qwrfg";
	*/

	/*
	cout << "----------------------------------------" << endl;

	// 针对于形参为const char*
	cout << isPasswordOK("1234A5678") << endl;
	cout << isPasswordOK("a123") << endl;
	cout << isPasswordOK("a123Bcdefg4567890") << endl;
	cout << isPasswordOK("") << endl;

	//cout << isPasswordOK(0) << endl;

	cout << isPasswordOK("123456789") << endl;
	cout << isPasswordOK("abcdefghijk") << endl;
	cout << isPasswordOK("1234abcde8") << endl;
	*/

	/*
	// 针对于形参为char*
	while (1)
	{
	char c[100000];
	cin >> c;
	cout << isPasswordOK(c) << endl;
	}
	*/

	// 第二次测试

	/*
	cout << "-----5-----" << endl;
	char s[] = "D://LogSafe.txt";
	initLog(s);
	// 多线程
	thread task01(ThreadFun);
	thread task02(ThreadFun);
	thread task03(ThreadFun);
	thread task04(ThreadFun);
	task01.detach();
	task02.detach();
	task03.detach();
	task04.detach();
	*/
	/*
	cout << "-----1.1-----" << endl;
	cout << isUsernameOK((char *)"a12345678") << endl;
	cout << isUsernameOK((char *)"a123") << endl;
	cout << isUsernameOK((char *)"a123bcdefg4567890") << endl;
	cout << isUsernameOK((char *)"") << endl;
	cout << isUsernameOK(0) << endl;
	cout << isUsernameOK((char *)"123456789") << endl;
	cout << isUsernameOK((char *)"abcdefghjik") << endl;
	cout << "-----1.2-----" << endl;
	cout << isPasswordOK((char *)"123A5678") << endl;
	cout << isPasswordOK((char *)"a123") << endl;
	cout << isPasswordOK((char *)"a123Bcdefg567890") << endl;
	cout << isPasswordOK((char *)"") << endl;
	cout << isPasswordOK(0) << endl;
	cout << isPasswordOK((char *)"123456789") << endl;
	cout << isPasswordOK((char *)"abcdefghjik") << endl;
	cout << isPasswordOK((char *)"1234abcde8") << endl;
	*/
	/*
	cout << "-----2.1-----" << endl;
	char buf[8];
	char dest[8];
	char src[] = "12345";
	int t;
	while (1)
	{

		t = gets_safe(buf, sizeof(buf));
		// t = strcpy_safe(dest, sizeof(dest), src);
		cout << t << endl;
	}
	*/
	/*
	cout << "-----2.2-----" << endl;
	char dest[8];
	int res;
	int i = 0;
	while (i++ < 3)
	{
		char* src = new char[10];
		cin >> src;
		res = strcpy_safe(dest, sizeof(dest), src);
		cout << res << endl;
	}

	char ss1[] = "1234567";
	res = strcpy_safe(0, 8, ss1);
	cout << res << endl;

	char ss2[] = "1234567";
	res = strcpy_safe(dest, sizeof(ss2), 0);
	cout << res << endl;

	char ss3[] = "12345678";
	res = strcpy_safe(dest, 0, ss3);
	cout << res << endl;
	*/
	/*
	cout << "-----3-----" << endl;
	initPool(8);
	allocBlock();
	char* buf = allocBlock();
	int res = 0;
	for (int i = 0; i < 256; ++i)
	{
		++res;
		// cout << int(buf[i]) << endl;
	}
	// cout << res << endl;
	cout << getBlockCount() << endl;
	cout << getAvailableBlockCount() << endl;
	char* buf1 = allocBlock();
	allocBlock();
	cout << getAvailableBlockCount() << endl;
	cout << freeBlock(buf1) << endl;
	cout << getBlockCount() << endl;
	cout << getAvailableBlockCount() << endl;
	cout << freeBlock(buf) << endl;
	res = 0;
	for (int i = 0; i < 256; ++i)
	{
		++res;
		cout << int(buf[i]) << endl;
	}
	cout << res << endl;
	cout << freePool() << endl;
	cout << freePoolForce() << endl;
	cout << getBlockCount() << endl;
	cout << getAvailableBlockCount() << endl;
	*/
	/*
	cout << "-----4.1-----" << endl;
	char t[100];
	while (1)
	{
		int* of = new int;
		int s;
		// cin遇到空格或回车停止
		// cin >> t;
		cin.getline(t, 100);
		s = my_atoi8(t, of);
		cout << "number:" << s << "\t" << "*of:" << *of << endl;
	}
	*/
	/*
	int* of = new int;
	int s;
	char c3[] = "";
	s = my_atoi8(c3, of);
	cout << "number:" << s << "\t" << "*of:" << *of << endl;
	s = my_atoi8(0, of);
	cout << "number:" << s << "\t" << "*of:" << *of << endl;
	*/
	/*
	cout << "-----4.2-----" << endl;
	int res;
	int *of = new int;
	cout << "-----1-----" << endl;
	res = iAdd_Safe(12, 13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iAdd_Safe(127, 0, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iAdd_Safe(-12, -13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iAdd_Safe(-127, 13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iAdd_Safe(127, 3, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iAdd_Safe(-126, -13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	cout << "-----2-----" << endl;
	res = iSubtract_Safe(12, 13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iSubtract_Safe(127, 0, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iSubtract_Safe(-12, -13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iSubtract_Safe(-127, 1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iSubtract_Safe(127, -1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iSubtract_Safe(-126, 13, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	cout << "-----3-----" << endl;
	res = iMultiply_Safe(2, 30, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(127, 1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(-2, 30, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(-12, -3, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(-128, 1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(127, 3, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(-28, 6, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iMultiply_Safe(-128, -1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	cout << "-----4-----" << endl;
	res = iDivide_Safe(127, 3, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(-28, 7, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(-128, 1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(-128, -1, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(127, 0, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(-28, 0, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	res = iDivide_Safe(-128, 0, of);
	cout << "res:" << res << "\t" << "of:" << *of << endl;
	*/
	/*
	cout<< "-----4.3-----" << endl;
	int res;
	int* of = new int;
	cout << "-----3-1-----" << endl;
	res = Add_Safe(12, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(255, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(132, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(255, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Add_Safe(124, 123, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-2-----" << endl;
	res = Subtract_Safe(17, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(127, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(232, 13, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(127, 128, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Subtract_Safe(2, 255, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-3-----" << endl;
	res = Multiply_Safe(2, 30, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(127, 1, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(122, 2, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(127, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Multiply_Safe(28, 26, of);
	cout << "res:" << res << "of:" << *of << endl;
	cout << "-----3-4-----" << endl;
	res = Divide_Safe(234, 3, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Divide_Safe(228, 7, of);
	cout << "res:" << res << "of:" << *of << endl;
	res = Divide_Safe(228, 0, of);
	cout << "res:" << res << "of:" << *of << endl;
	*/
	

	system("pause");
	return 0;
}