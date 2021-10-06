#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
//qosrt函数的使用者得实现一个比较函数
int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;

	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
void qsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*))


特科技
整个数组的地址，4 / 8
跳过一个数组，f后面的地址，4 / 8
跳过一个字符，b的地址，4 / 8
随机值
随机值
strlen（char * 也就是地址）才对，报错，把‘a’的ASCII 97
当做地址
‘b’, 从98这个地址寻找\0，报错
会自动把 & a这个数组指针，转为char*, strlen得到'a'的地址，随机值
从f后面找，随机值
两个随机值
中间差6字节
从b开始找，随机值，比从a找少1字节
19
19
19
13
18
7
首元素地址，4 / 8
首元素，1
首元素，1
数组地址，4 / 8
跳过整个数组后的地址，4 / 8
第二个元素的地址，4 / 8
6
首元素地址，6
报错，把97当做地址
98当做地址，报错
当做‘a’的地址，6
跳过整个数组，随机值
‘b’的地址，5
指针变量，地址，4 / 8
b的地址，4 / 8
a，1
a, 1
取出指针p的地址，4 / 8
数组地址 + 1, 跳过整个数组4 / 8
第二个元素，1
数组，6
第二个元素，5
ascii, 报错
== *p，报错
指针的地址，随机值
随机值，与上面那个无关系，因为\0的位置不确定
b的地址，5


sizeof(数组名)
& 数组名
除此之外，所
有的数组名
都是数组首
元素的地址
数组，48
4
第一行数组名，数组名单独放在sizeof内部，16
a[0]是第一行数组的数组名，没单独放在sizeof内部，也没有&, 所以a[0]表示首
元素地址。第一行第二个元素的地址，4 / 8
第一行第二个元素，4
二维数组数组名，表示首元素（第一行）地址
第二行地址，4 / 8, 此时a的类型int(*)[4] & a[1] == a + 1
第二行，16
取地址第一行得到地址， + 1就是第二行地址，4 / 8 int（ * ）[4]
第二行 == a[1], 16
a二维数组首元素地址，第一行元素，16
总结： 数组名的意义：
1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
3. 除此之外所有的数组名都表示首元素的地址。
指针笔试题
笔试题1：
笔试题2
笔试题3
printf("%d\n", sizeof(a[3]));
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}
//程序的结果是什么？
//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
比特科技
sizeof 并不会访问内存空间，第四行的数组名，假如存在a[3]，4个整型，16
sizeof(a[3])相当于把第四组的数组名单独放在sizeof内





//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);























//#include <stdio.h>
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pf
//	void (*pf)(const char*) = test;
//	//函数指针的数组pp
//	void (*pfArr[5])(const char* str);
//	pfArr[0] = test;
//	//指向函数指针数组pfArr的指针ppfArr
//	void (*(*ppfArr)[10])(const char*) = &pfArr;
//	return 0;
//}





















//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add      2:sub \n");
//		printf(" 3:mul      4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}
//
















//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}


////代码1
//(*(void (*)())0)();
////代码2
//void (*signal(int, void(*)(int)))(int);





//void test1(int* p)
//{}
////test1函数能接收什么参数？
//void test2(char* p)
//{}
////test2函数能接收什么参数？


//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test(char** p)
//{
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}










//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}



//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//1.√
//2.×
//3.√
//4.×
//5.×
//6.√
//7.×





















//#include <stdio.h>
//void print_a1(int a[3][5], int row, int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_a2(int(*a)[5], int row, int col)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_a1(a, 3, 5);
//	
//	print_a2(a, 3, 5);
//	return 0;
//}



















//#include <stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	printf("a = %p\n", a);
//	printf("&a= %p\n", &a);
//	printf("a+1 = %p\n", a + 1);
//	printf("&a+1= %p\n", &a + 1);
//	return 0;
//}









//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}



//#include <stdio.h>
//
//int* a1[10]; //整形指针的数组
//char* a2[4]; //一级字符指针的数组
//char** a3[5];//二级字符指针的数组
//
//
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//本质是把字符串 hello bit.首字符的地址放到了pstr中

//int main()
//{
//	const char* ptr = "hello everybody";
//	printf("%s\n", ptr);
//	return 0;
//}
//int main()
//{
//	char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//	printf("%s\n", pstr);
//	return 0;
//}