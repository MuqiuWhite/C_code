#include "sort.h"
int main()
{
	int a[] = { 10, 6, 7, 1, 3, 9, 4, 2 ,5 };
	PrintArray(a, sizeof(a) / sizeof(int));

	// �鲢����ݹ�ʵ��
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	// �鲢����ǵݹ�ʵ��
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	// ��������
	CountSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
	return 0;
}