#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void put(int n)
//{
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;		
//	}
//	printf("%d", m);
//
//}
//int out(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * out(n - 1);
//}

//int str(char *n)
//{
//	int i = 0;
//	int count = 0;
//	for (i=0;n[i]!='\0';i++)
//	{
//		count++;
//	}
//	return count;
//}
//int str(char* n)
//{
//	
//	if (*n != '\0')
//	{
//		return 1 + str(n + 1);
//	}
//	else
//		return 0;
//
//
//}
//int s(char* n)
//{
//	int size = 0;
//	while (*n != '\0')
//	{
//		size++;
//		n++;
//	}
//	return size;
//}
//void str(char* n)
//{   
//	int size = s(n);
//	char temp = n[0];
//	n[0] = n[size - 1];
//	*(n + size - 1) = '\0';//¸ø×Ö·û´®½áÎ²¼Ó'\0'
//	if (s(n+1)>1)
//	{
//		str(n + 1);
//	}
//	n[size - 1] = temp;
//	
//}
//int str(int a)
//{
//	int sum = 0;
//	if (a > 9)
//	{
//		return str(a / 10) + a % 10;
//	}
//	else
//		return a;
//
//}
//double str(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * str(n, k - 1);
//	else if(k<0)
//		return 1.0 / str(n, -k);
//
//}
int str(int n)
{
	if (n <= 2)
		return 1;
	else
		return str(n - 1) + str(n - 2);
}

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{		
			a = b;
			b = c;
			c = a + b;
			n--;	
	}
		return c;
	

}
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int sum=str(n);
		printf("µÝ¹é%d\n",sum);

		int s = fib(n);
		printf("·ÇµÝ¹é%d", s);
	}

	return 0;
}



/*put(n);
		printf("\n");
		int m=out(n);
		printf("%d\n",m);*/
//char a[20] = { 0 };
	//printf("ÃÜÂë\n");
	//scanf("%s", a);
	//int p;
	//while (p=getchar() != '\n')
	//{
	//	;
	//}
//if (n > 9)
//{
//	put(n / 10);
//}
//printf("%d  ", n % 10);