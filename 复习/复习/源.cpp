#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int cmp(const void* p1,const void*p2 )
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//void swap(void* p1, void* p2,int s)
//{
//	for (int i = 0; i < s; i++)
//	{
//		char tmp=*((char*)p1+i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void buble(void* a, int n, int s, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (cmp((char*)a+j*s,(char*)a+(j+1)*s)>0)
//			{
//				swap((char*)a + j * s, (char*)a + (j + 1) * s,s);
//			}
//		}
//	}
//}
//int main()
//{
//	int a[5] = {1,3,2,5,4};
//	int n = sizeof(a) / sizeof(a[0]);
//	/*qsort(a, n, sizeof(int), cmp);*/
//
//	buble(a, n, sizeof(int), cmp);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//}

//char* my(char* a,char *b)
//{
//	int i = 0;
//	/*for (i = 0; a[i] != '\0'; i++)
//	{
//		count++;
//	}*/
//	//char* p = a;
//	//while (a[i] != '\0')
//	//{
//	//	p++;
//	//}
//
//	//return p - a;
//
//	/*if (a[i] != '\0')
//	{
//		return 1 + my(a + 1);
//	}
//	else
//	{
//		return 0;
//	}*/
//
//	assert(a && b);
//	//char* add = a;
//	//while (*(a++) == *(b++) != '\0');
//	//return add;
//
//	char* c = a;
	/*while (*a != '\0')
	{
		a++;
	}
	while (*(a++) == *(b++))
	{
		;
	}*/

	/*while (*a == *b)
	{
		if (*a == '\0')
		{
			return 0;
		}
		a++;
		b++;
	}
	return *a - *b;*/

	/*while (n-- && (*a++ == *b++) != '\0');
	return c;*/

	/*while (*a != '\0')
	{
		a++;
	}
	while (n-- && (*a++ == *b++) != '\0');*/

	//strncmp

	/*if (!n)
	{
		return 0;
	}
	while (n-- && *a && *a == *b)
		a++;
	b++;
	return *a - *b;*/

	//char* s1, * s2, * cp = a;
	//if (*b == '\0')
	//{
	//	return a;
	//}
	//while (*cp)
	//{
	//	s1 = cp;
	//	s2 = b;
	//	while (*s1 && *s2 && *s2 == *s1)
	//	{
	//		s1++;
	//		s2++;
	//	}
	//	if (*s2 == '\0')
	//	{
	//		return cp;
	//	}
	//	cp++;
	//}
	//return NULL;

//	char* s1, * s2, * cp = a;
//	if (*b == '\0')
//	{
//		return a;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = b;
//		while (*s1 && *s2 && *s2 == *s1)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//	void *a,const void*b,int n
//	assert(a && b);
//	char* c = a;
//	while (n--)
//	{
//		*(char*)a = *(char*)b;
//		a = (char*)a + 1;
//		b = (char*)b + 1;
//	}
//	if (a < b)
//	{
//		while (n--)
//		{ 
//			*(char*)a = *(char*)b;
//			a = (char*)a + 1;
//			b = (char*)b + 1;
//
//		}
//	}
//	else
//	{
//		while (n--)
//		{
//			*(char*)a + n = *(char*)b + n;
//		}
//	}
//
//	char* p1, * p2;
//	const char* p1 = (char*)a;
//	const char* p2 = (char*)b;
//	while (n-- && *p1 == *p2)
//	{
//		p1++;
//		p2++;
//	}
//	int n = p1 - p2;
//	if (n > 0)
//		return 1;
//	else if
//		- 1
//	else
//		0
//		return a;
//}
//
//int main()
//{
//	char a[] = "asdfg";
//	char b[] = "cc";
//	return 0;
//}

struct Point
{
	int x;
	int y;
}p1; //??????????????????????p1
struct Point p2; //??????????????p2

struct Point p3 = {1,2 };
struct Stu 
{
	char name[15];//????
	int age; 
};
struct Stu s = { "zhangsan", 20 };//??????
struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, {4,5}, NULL };

int main()
{
	printf("%d", n1.p.x);
	return 0;
}

union un
{
	char c;
	int b;
}un;

un.i = 1;
return un.c;