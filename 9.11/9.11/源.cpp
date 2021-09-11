#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int cmp( void* a,  void* b)
//{
//	return(*(char*)a-*(char*)b);
//}
//char a[] = {"aaa","bbb","ddd","ccc"};
	//int sz = sizeof(a);
	//qsort(a, sz, sizeof(char), cmp);
	//printf("%s\n", a);
int cmp(char a1[], char a2[], int sz,int sz2)
{
	char b[50];
	int left = 0,right=0;
	if (sz2 != sz)
	{
		return 0;
	}
	strcpy(b, a1);
	int i, j = 0;
	//×óÐý
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1; j++)
		{
			char temp = a1[j];
			a1[j] = a1[j + 1];
			a1[j + 1] = temp;
		}
		if (strcmp(a2, a1)==1)
		{
			left = 1;
		}
	}
	//ÓÒÐý
	for (i = 0; i < sz-1; i++)
	{
		for (j = sz - 1; j > 0; j--)
		{
			char temp = b[j - 1];
			b[j - 1] = b[j];
			b[j] = temp;
		}
		if (strcmp(a2, b)==1)
		{
			right = 1;
		}
	}
	if (right || left)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	char a1[50],a2[50];
	while (scanf("%s",&a1))
	{
		getchar();
		scanf("%s", &a2);
		int sz = strlen(a1);
		int sz2 = strlen(a2);
		getchar();
		printf("%d\n", cmp(a1, a2, sz, sz2 ));
	}
	return 0;
}