#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
//{
//	int i = 0;
//	int s = 0;
//	for (i = 0; i < 9; i++)
//	{
//		s = s ^ arr[i];
//	}
//
//	int p;
//	for (i = 0; i < 32; i++)
//	{
//		if (s >> i & 1)
//		{
//			p = i;
//			break;
//		}
//	}
//
//	*pnum1 = *pnum2;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >> p & i)
//		{
//			*pnum1 ^= arr[i]; 
//		}
//		else
//		{
//			*pnum2 ^= arr[i]; 
//		}
//		
//	}
//
//}

//int main()
//{
//int a[3][4] = { 0 };
//
//printf("%d\n", sizeof(a[3]));
//}




//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


#include <stdio.h>
int int_cmp(void* p1,void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void _swap(void* p1, void* p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 6, 8, 0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


//int main()
//{
//	int a[] = { 0,0,1,1,2,2,3,4 };
//	find(a,sizeof(a)/sizeof(a[0]));
//
//
//}



//int my_atoi(char*p)
//{
//	//符号      返回值
//	int i = 1, s = 0;
//	
//	if (p == NULL)//判断指针是否为空
//	{
//		printf("空指针\n");
//		return 0;
//	}
//	while(*p ==' ') // 跳过前面的空格字符
//	{
//		p++;
//	}
//
//	if (*p == '-')//负号
//	{
//		i = -1;
//	}
//	if (*p == '-' || *p == '+')//符号位
//	{
//		p++;
//	}
//
//	while (*p >= '0' && *p <= '9')//把数字字符转换成整数，并把最后的整数赋值给s
//	{
//		s = s * 10 + *p - '0';
//		p++;
//	}
//
//	s = s * i;
//	return s;
//}

//char* my_strncpy(char* dest, const char* src, int n)
//{
//	char* p = dest;
//	assert(dest && src);
//	while (n && (*dest++ = *src++) != '\0')
//	{
//		n--;
//	}
//
//	if (n > 0)
//	{
//		while (n--)
//		{
//			*dest++ = '0';
//		}
//	}
//	return p;
//}
//int main()
//{
//	char src[20] = "12345";
//	char dest[20] = "678";
//	my_strncpy(dest, src, 8);
//	printf("%s\n",dest);
//	return 0;
//}









//int main() 
//{
//
//    int n;
//    __int64 m;
//    int s;
//    while (scanf("%d%I64d", &n, &m)&&(n+m)) 
//    {      
//        s = 1;
//        while (m % 2 == 0) {
//            m /= 2;
//            s++;
//        }
//        printf("%d\n", s);
//    }
//    return 0;
//}









//#include <stdio.h>
//_int64 num(int m, int N)
//{
//	if (m == 1)
//		return 2;
//	else if (m == N)
//		return(num(m - 1, N) + 2);
//	else
//		return(3 * num(m - 1, N) + 2);
//}
//int main()
//{
//	_int64 a;
//	int n, m;
//	while (scanf("%d", &n) != EOF)
//	{
//		while (n--)
//		{
//			scanf("%d", &m);
//			int N  = m;
//			a = num(m,N);
//			printf("%I64d\n", a);
//		}
//	}
//
//
//	return 0;
//}


//_int64 num(int n)
//{
//	if (n == 1)
//	{
//		return 2;
//	}
//	else 
//	{
//		return (3 * num(n-1) + 2);
//	}
//}
//
//int main()
//{
//	_int64 a;
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		a = num(n);
//		printf("%I64d\n", a);
//	}
//}

