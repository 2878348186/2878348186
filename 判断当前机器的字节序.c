#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int check_sys()
{
	//int a = 1;
	//����1��С��
	//����0�����
	//return *(char*)&a;
	
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}