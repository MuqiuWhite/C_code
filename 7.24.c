#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int su(int a)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < a; i++)
	{
	if (a % i == 0)
		sum = sum + i;
	}
	return sum;
	

}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		while (n--)
		{
			int a = 0, b = 0;
			scanf("%d%d", &a, &b);
			int m = su(a);
			int n = su(b);
			if (m == b && n == a)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
//int n = 0;
//int i = 0, j = 0;
//int a[100][100] = { 0 };
//while (scanf("%d", &n)!=EOF)
//{
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			if (j == 1)
//				a[i][j] = 1;
//			else if (i == j)
//			{
//				a[i][j] = 1;

//			}
//			else
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//    }
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				if (i != j)
//				{
//					printf("%d ", a[i][j]);
//				}
//				else
//				{
//					printf("%d\n", a[i][j]);
//				//	break;
//				}
//			}
//		}
//		printf("\n");
//	
//}
//int n = 0;
//int i = 0;
//char a[100] = "0";
//while (scanf("%d", &n) != EOF)
//{
//	getchar();
//	while (n--)
//	{
//		int c = 0, count = 0;
//		gets(a);
//		int size = strlen(a);
//		for (i = 0; i < size; i++)
//		{
//			if (a[i]<0)
//			{
//				c++;
//			}
//			count = c / 2;
//		}
//		printf("%d\n", count);



//	}
//}
//int n = 0;
//int i = 0, j = 0;
//while (scanf("%d", &n) != EOF)
//{
//	getchar();
//	while (n--)
//	{
//		char a[100] = "0";
//		int temp = 1;
//		scanf("%s", a);
//		int size = strlen(a);
//		for (i = 0,j=size-1; i <j; i++,j--)
//		{
//			if (a[i] != a[j])
//				temp = 0;
//		}
//		if (temp == 1)
//			printf("yes\n");
//		else
//			printf("no\n");


//	}
//}
