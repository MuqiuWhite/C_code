#include "sort.h"
int main()
{
	int a[] = { 6, 2, 5, 3, 9, 4, 8, 5, 1 , 7 };
	PrintArray(a, sizeof(a) / sizeof(int));

	/*InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));

	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));

	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));

	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));*/

	/*QuickSort(a,0, sizeof(a) / sizeof(int)-1);
	PrintArray(a, sizeof(a) / sizeof(int));*/

	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));

}