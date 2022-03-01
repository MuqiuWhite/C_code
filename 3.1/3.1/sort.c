#include "sort.h"
void PrintArray(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
// 归并排序递归实现
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fall\n");
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}
void _MergeSort(int* a, int left, int right, int *tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
	while (begin1<=end1&&begin2<=end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	for (int j = left; j <= right; j++)
	{
		a[j] = tmp[j];
	}
}
// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fall\n");
		exit(-1);
	}
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i +=2* gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;	
			if (end1 >= n||begin2>=n)//不需要归并
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
					tmp[j++] = a[begin2++];
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			for (int p = i; p <= end2; ++p)
			{
				a[p] = tmp[p];
			}
		}
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}
// 计数排序
void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int range = max - min + 1;
	int *count = (int*)malloc(sizeof(int) * range);
	memset(count, 0, sizeof(int)*range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	for (int i = 0; i < n; i++)
	{
		count[a[i] - min]++;//统计次数
	}
	int j = 0;
	for (int i = 0; i < range; i++)//count数组
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
}