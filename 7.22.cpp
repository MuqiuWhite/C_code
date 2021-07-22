#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
int su(int a)
{
	int j = 0;
	for (j = 2; j <= sqrt(a); j++)
	{
		if (a % j == 0)
			return 0;
	}
	return -1;
}

int ju(int a)
{
	if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0)))
		return 1;
	else
		return 0;

}
int pu(int a[], int key, int size)
{
	int l = 0, r = size - 1;
	while(l<=r)
	{
		
		int mid = (l + r) / 2;
		if (a[mid] > key)
		{
			r = mid--;
		}
		else if (a[mid] < key)
			l = mid++;
		else
			return mid;
	}
	if (l > r)
		return -1;
}

int a(int num)
{
	 return num + 1;
}
int main()
{
	//char a1[] = "xxx xx";
	//char a2[] = "he";
	//char* r =(char*)memset(a1,'h',2);
	//printf("%s", a1);
	//int a = 0;
	//for (a = 100; a < 200; a++)
	//{
	//	su(a);
	//	if (su(a) == -1)
	//		printf("%d  ",a);
	//}

	//int a = 0;
	//for (a = 1000; a < 2000; a++)
	//{
	//	ju(a);
	//	if (ju(a) == 1)
	//		printf("%d  ", a);
	//}

	//int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int size = sizeof(a) / sizeof(a[0]);
	//int key = 8;
	//int p = pu(a, key, size);
	//if (p == -1)
	//	printf("找不到");
	//else
	//	printf("找到了，%d", p);
	int num = 0;
	num=a(num);
	printf("%d  ", num);
	num=a(num);
	printf("%d  ", num);
	num=a(num);
	printf("%d  ", num);
	return 0;
}