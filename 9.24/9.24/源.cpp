#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//申请空间
//	int* a=(int*)malloc(sizeof(int) * 100);
//	if (a == NULL)
//	{
//		return -1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(a + i)=i;
//	}
//	//释放
//	free(a);
//	a = NULL;
//
//	return 0;
//}

int main()
{

	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return-1;
	}
	else
		return -1;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *p);
	}
	printf("\n");
	//增加空间
	int* a;
	a=(int *)realloc(p, 20 * sizeof(int));
	if (a != NULL)
	{
		p = a;
	}
	for (i = 0; i < 20; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p+i));
	}
	//释放
	free(p);
	p = NULL;

	return 0;
}