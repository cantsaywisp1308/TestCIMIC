#include<Windows.h>
#include<stdio.h>

WINAPI HAM_THUC_THI(LPVOID lpThreadParameter)
{
	while (1)
	{
		printf("[Task 1]: xin chao\r\n");
		Sleep(2000);
	}
}
void main()
{
	HANDLE thread1 = CreateThread(NULL, 16, HAM_THUC_THI, NULL, NULL, NULL);
	while (1)
	{
		printf("[Task 2]: Say hello\r\n");
		Sleep(1000);
	}
}