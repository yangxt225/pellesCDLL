#ifndef _TEST_H
#define _TEST_H

/* WINAPI宏 这里定义动态库函数的调用约定为"__stdcall"
	可以去掉，则使用默认调用约定"__cdecl"
	(__cdecl是C/C++(非类成员函数以及静态类成员函数)程序默认使用的调用约定)
*/
#ifndef WINAPI
#define WINAPI  __stdcall
#endif

int WINAPI sum(int, int);
int WINAPI sub(int, int);
int WINAPI multi(int a, int b);

#endif

