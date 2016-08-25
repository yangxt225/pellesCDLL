#ifndef _TEST_H
#define _TEST_H

#ifndef WINAPI
#define WINAPI  __stdcall
#endif

int WINAPI sum(int, int);
int WINAPI sub(int, int);
int WINAPI multi(int a, int b);

#endif

