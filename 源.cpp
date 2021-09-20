#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void* my_memmove(void* a, const void* b,int sz )
{
	void* ret = a;
	if (a < b)//从前向后
	{
		while (sz--)
		{
			*(char*)a = *(char*)b;
			a= (char*)a+1;
			b= (char*)b+1;
		}
	}
	else//从后向前
	{
		while (sz--)
		{
			*((char*)a+sz) = *((char*)b+sz);
		}
	}
	return a;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	my_memmove(a+2,a,20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}