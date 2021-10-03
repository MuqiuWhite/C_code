#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//int main()
//{
//	printf("%d\n", sizeof(type_a));
//
//	type_a *ps=(type_a*)malloc(sizeof(type_a) + sizeof(int) * 20);
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	ps->i = 100;
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		ps->a[j] = j;
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d  ",ps->a[j]);
//	}
//	type_a* pp = (type_a*)realloc(ps, sizeof(type_a) + 20 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s：失败了\n", strerror(errno));
//		return -1;
//	}
//	else
//	{
//		ps = pp;
//	}
//
//	//使用
//	//……
//
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

typedef struct st_type
{
	int i;
	int* p_a;
}type_a;

int main()
{
	type_a* p = (type_a*)malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int*)malloc((p->i) * sizeof(int));

	int j = 0;
	for (j = 0; j < 100; j++)
	{
		p->p_a[j] = j;
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d  ",p->p_a[j]);
	}
	//p_a空间不够了，扩容
	int* pp = (int*)realloc(p->p_a, 20 * sizeof(int));
	if (pp == NULL)
	{
		printf("%s：失败了\n", strerror(errno));
		return -1;
	}
	else
	{
		p->p_a = pp;
	}

	//释放空间
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	return 0;
}
