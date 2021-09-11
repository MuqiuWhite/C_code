#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int cmp(void* p1, void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void swap(void* p1, void* p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		* ((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void my_qsort(void* a, int count, int sz, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)a + j * sz, (char*)a + (j + 1) * sz) > 0)
			{
				swap((char*)a + j * sz, (char*)a+ (j + 1) * sz, sz);
			}
		}
	}
}
int main()
{
	int a[5] = { 5,3,2,1,4 };
	int i = 0;
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), cmp);
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}

//int n = 0, m=0,i = 0,j=0;
//while (scanf("%d%d", &n,&m) == 2)
//{
//	int a[50], b[50],c[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		c[i] = a[i];
//	}
//	for (i = 0,j=n; i < m; i++,j++)
//	{
//		scanf("%d", &b[i]);
//		c[j] = b[i];
//	}
//	int k;
//	for (i = 0; i < j-1; i++)
//	{
//		k = 0;
//		int flag = 1;
//		for (k = 0; k < j - i-1; k++)
//		{
//			flag = 0;
//			if (c[k] > c[k + 1])
//			{
//				int temp = 0;
//				temp = c[k];
//				c[k] = c[k + 1];
//				c[k + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	for (i = 0; i < j ; i++)
//	{
//		printf("%d ", c[i]);
//	}
//}
/*int a[100];
		int del,j=0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &del);
		for (i = 0; i < n; i++)
		{
			if (a[i] != del)
			{
				a[j] = a[i];
				j++;
			}
		}
		for (i = 0; i < j; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");*/
//int i, n;
//while (scanf("%d", &n) != EOF)
//{
//	int a[100];
//	int flag1 = 0, flag2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (a[i] > a[i + 1])
//			flag1 = 1;
//		else if (a[i] < a[i + 1])
//			flag2 = 1;
//	}
//	if (flag1 && flag2 == 1)
//		printf("unsorted\n");
//	else
//		printf("sorted\n");
//}
/*int n = 0, i = 0;
while (scanf("%d", &n) != EOF)
{
	int a[100] = { 0 };
	int flag1 = 0, flag2 = 0;
	while (n--)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
			flag1 = 1;
		else if (a[i] < a[i + 1])
			flag2 = 1;
	}
	if (flag1 && flag2 == 1)
		printf("unsorted\n");
	else
		printf("sorted\n");
}*/
//#include<stdio.h>
//int main() {
//    int n; 
//    scanf_s("%d", &n);
//    int a[100];
//    int flag1 = 0, flag2 = 0;
//    for (int i = 0; i < n; i++) 
//        scanf_s("%d", &a[i]);
//    //思路：当序列为递减时，flag1=1；当序列为递增时，flag2=1
//    //若flag1&&flag2=1，即flag1和flag2同时为1，序列既有增也有减，说明其不是有序序列
//    //否则，因为flag1和flag2均初始化为0，则二者相与必然为0，说明只能为递增或者只能为递减，因此为有序序列
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (a[i] > a[i + 1])
//            flag1 = 1;
//        else if (a[i] < a[i + 1]) flag2 = 1;
//    }
//    if (flag1 && flag2) 
//        printf("unsorted\n");
//    else printf("sorted\n");
//    return 0;
//}