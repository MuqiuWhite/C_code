#include <stdio.h>

	/*char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	比特科技
		int a = 1;
	void* p = &a;
	void* 里可以放入任意类型的地址，无法进行运算
		待排序的元素个数
		一个元素的大小，单位是字节
		cmp指的是，排序时，用来比较的2个元素的函数
		1, 3
		3, 5
		...
		比较
		交换
		sizeof(数组名)--数组，计算数组的大小；单位为字节 16
		& 数组名--数组，数组的地址 4 / 8
		首元素地址，计算首元素地址大小 4 / 8字节
		解引用首元素，a[0]大小是4
		* a == *(a + 0) == a[0]
		a[1]的地址，4 / 8
		a[1] 4
		int(*)[4]
		解引用数组的地址，是数组，大小为16
		a = *&a
		数组的地址 + 1，跳过整个数组，还是地址，4 / 8
		4 / 8
		第二个元素地址 4 / 8
		要排序的地址
		size_t
		函数指针 * cmp
		printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/
#include <string.h>
int main()
{
	/*char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/
	/*printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
		printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));
	/*int a[3][4] = { 0 };
	printf("%d\n", sizeof(a[0] + 1));*/
	return 0;
}