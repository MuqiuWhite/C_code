#include "sort.h"
int main()
{
	int a[] = { 10, 6, 7, 1, 3, 9, 4, 2 ,5 };
	PrintArray(a, sizeof(a) / sizeof(int));

	// 归并排序递归实现
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	// 归并排序非递归实现
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	// 计数排序
	CountSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	return 0;
}