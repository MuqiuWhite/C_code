#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void* my_memmove(void* a, const void* b, int sz)
{
	void* c = a;
	if (a < b)
	{
		while (sz--)
		{
			*(char*)a = *(char*)b;
			*(char*)a = *(char*)a + 1;
			*(char*)b = *(char*)b + 1;
		}
	}
	else
	{
		*(char*)a = *(char*)a + sz;
		*(char*)b = *(char*)b + sz;
		while (sz--)
		{
			*(char*)a = *(char*)b;
			*(char*)a = *(char*)a - 1;
			*(char*)b = *(char*)b - 1;
		}
	}
	return c;
}

int main()
{

	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	my_memmove(a + 2, a, 3 * sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]; i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}


struct a
{
	char b[10];
	int c[3];
}*p;
struct a a2;
struct d
{
	int f;
	struct note* next;
};