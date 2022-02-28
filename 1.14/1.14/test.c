#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"
void test()
{
	int a[] = { 9,4,2,3,5,6,8 };
	InsertSort(a, sizeof(a) / sizeof(int));
	print(a, sizeof(a) / sizeof(int));
	ShellSort(a, sizeof(a) / sizeof(int));
	print(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	print(a, sizeof(a) / sizeof(int));
	HeapSort(a, sizeof(a) / sizeof(int));
	print(a, sizeof(a) / sizeof(int));
	BubbleSort(a, sizeof(a) / sizeof(int));
	print(a, sizeof(a) / sizeof(int));
	quickSort(a, 0,sizeof(a) / sizeof(int)-1);
	print(a, sizeof(a) / sizeof(int));
	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
	print(a, sizeof(a) / sizeof(int));
}

int main()
{
	test();

	return 0;
}