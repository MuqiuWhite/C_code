#include "sort.h"
// 插入排序
void InsertSort(int* a, int n)
{
	assert(a);

	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int x = a[end + 1];//把x插入【0，end】的有序区间
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;//从后往前
			}
			else
				break;
		}

	}
}

// 希尔排序
void ShellSort(int* a, int n);
