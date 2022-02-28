#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"
void print(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}
// 插入排序
void InsertSort(int* a, int n)
{
	assert(a);

	for (int i = 0; i < n-1; i++)
	{
		// 将x插入[0, end]有序区间
		int end=i;
		int x=a[end+1];
		while (end >= 0)//将数组的元素一个个比较大小排序
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;

		}
		a[end + 1] = x;//两种情况（end>=0、end=-1）都是在end的后面插入。
	}
	
}

// 希尔排序
//void ShellSort(int* a, int n)
//{
//	int gap = 3;
//	int end = 0;
//	int x = a[end + gap];
//	for (int j = 0; j < gap; j++)//分成了gap组
//	{
//		for (int i = j; i < n - gap; i+=gap)
//		{
//			while (end >= 0)
//			{
//				if (a[end] > x)
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//					break;
//			}
//			a[end + gap] = x;//在end后面插入比a[end]小的数字
//		}
//	}
//}


void ShellSort(int* a, int n)
{
	
	// 多次预排序(gap > 1) +直接插入 (gap == 1)
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 2;
		//gap=gap/3+1 //加1是为了最后一次的gap一定为1即直接插入排序
		for (int i = 0; i < n - gap; i++)//轮着来，紫红蓝紫红蓝...
		{
			int end = i;
			int x = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > x)
				{
					a[end + gap] = a[end];
					--end;
				}
				else
					break;
			}
			a[end + gap] = x;

		}
	}
}

void swap(int* x, int* y)
{
	int a = *x;
	*x = *y;
	*y = a;
}

// 选择排序
void SelectSort(int* a, int n)
{
	assert(a);
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin, maxi = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[mini] > a[i])
			{
				mini = i;
			}
			if (a[maxi] < a[i])
			{
				maxi = i;
			}
		}
		swap(&a[begin], &a[mini]);//如果第一个就是最大的，maxi对应的就被mini与begin这一步换走了.

		// begin == maxi时，最大被换走了，修正一下maxi的位置
		if (begin == maxi)
			maxi = mini;
		swap(&a[end], &a[maxi]);
		end--;
		begin++;
	}
}

void adjustDown(int* a, int n, int parent)
{
	assert(a);
	int child = parent * 2 + 1;
	while (child <n)
	{
		if (a[child] < a[child + 1] && child + 1 < n)//找出左右孩子中大的那个
		{
			++child;
		}
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		adjustDown(a, n, i);
	}
	for (int end = n - 1; end > 0; end--)
	{
		swap(&a[end], &a[0]);
		adjustDown(a, end,0);
	}
}

//冒泡
void BubbleSort(int* a, int n)
{
	
	for (int j = 0; j < n; j++)
	{
		int flag = 0;
		for (int i = 0; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				flag = 1;
				swap(&a[i - 1], &a[i]);
			}
			
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int getIndex(int* a, int left, int right)
{
	//int mid = (left + right) / 2;
	int mid = left + ((right - left) >> 1);
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else  if (a[left] < a[right])
		{
			return left;
		}
		else
			return right;

	}
	else
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
			return right;
	}
}

int part1(int* a, int left, int right)
{
	// 三数取中 -- 面对有序最坏情况，变成选中位数做key，变成最好情况
	int min = getIndex(a, left, right);
	swap(&a[min], &a[left]);//和最左边的的值交换
	//左边key
	int key = left;
	while (left < right)
	{
		//右边先走，找小
		while (left<right && a[key]<=a[right])
		{
			right--;
		}
		//左边再走，找大
		while (left < right && a[key] >= a[left])
		{
			left++;
		}
		//都找到符合条件的了，就交换
		swap(&a[left], &a[right]);
	}
	swap(&a[left], &a[key]);

	return left;//返回相遇的下标
}

//前后指针法
int partion3(int* a, int left, int right)
{
	//左边为key

	// 三数取中 -- 面对有序最坏情况，变成选中位数做key，变成最好情况
	int min = getIndex(a, left, right);
	swap(&a[min], &a[left]);//和最左边的的值交换
	int key = left;
	int cur = left+1;
	int prev = left;
	while (cur <= right)
	{
		if (a[cur] <= a[key]&& ++prev !=cur)//避免了当prev和cur在同一位置时的交换
		{
			swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	swap(&a[prev], &a[key]);
	return prev;
}

void quickSort(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	//小区间优化，分割的区间内数量小就可以使用直接插入排序，不再用递归分割
	if (right - left + 1<10)
	{
		InsertSort(a + left, right - left + 1);
	}
	else
	{//递归快排减少递归次数
		int key = part(a, left, right);
		// [left, keyi-1] keyi [keyi+1, right]
		quickSort(a, left, key - 1);
		quickSort(a, key + 1, right);
	}
}

void init(st* t)
{
	t->top = t->capa = 0;
	t->data = NULL;
}
void push(st* t, STDataType x)//栈顶插
{

	if (t->capa == t->top)
	{
		int newCapa = t->capa == 0 ? 4 : t->capa * 2;
		st* newn = (st*)realloc(t->data, newCapa * sizeof(st));
		t->capa = newCapa;
		t->data = newn;

	}
	t->data[t->top] = x;
	t->top++;
}
void pop(st* t)//栈顶删
{
	assert(t);
	assert(t->top > 0);
	t->top--;
}
STDataType top(st* t)
{
	assert(t);
	assert(t->top > 0);
	return t->data[t->top - 1];
}
void des(st* t)
{

	free(t->data);
	t->top = t->capa = 0;
	free(t);
}
int size(st* t)
{
	return t->top + 1;
}
bool empty(st* t)
{
	return t->top == 0;
}
//快排非递归
void QuickSortNonR(int* a, int left, int right)
{
	st ST;
	init(&ST, left);
	push(&ST, left);
	push(&ST, right);
	while (!empty(&ST))
	{
		int end = top(&ST);
		pop(&ST);

		int begin = top(&ST);
		pop(&ST);

		int key = partion3(a, begin, end);
		//(begin,key-1),key,(key+1,end)
		if (key + 1 < end)
		{
			push(&ST, key + 1);
			push(&ST, end);
		}

		if (begin < key - 1)
		{
			push(&ST, begin);
			push(&ST, key - 1);
		}
	}
	des(&ST);
}

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	// left, mid, mid+1, right
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1,right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;//起始位置
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])//小的放前面
		{
			tmp[i++] = a[begin1++];
		}
		else
			tmp[i++] = a[begin2++];
	}
	//某一个区间可能会先结束，没结束的就继续
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++]; 
	}
	while (begin2 <= end1)
	{
		tmp[i++] = a[begin2++];
	}
	//tmp数组的有序的值放回a数组
	for (int j = left; j <= right; j++)
	{
		a[j] = tmp[j];
	}
}
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


//归并非递归
void MergeSortNotR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc null\n");
		exit(-1);
	}
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2*gap)
		{
			//区间范围
			// [i,i+gap-1] [i+gap,i+2*gap-1]
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			// 核心思想：end1、begin2、end2都有可能越界
			// end1越界 或者 begin2 越界都不需要归并
			if (end1 >= n || begin2 >= n)//只要有一个区间不存在就直接break
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			// end1 越界，[begin2,end2]不存在
//			if (end1 >= n)
//			{
//				end1 = n - 1;
//			}
//
//			//[begin1,end1]存在 [begin2,end2]不存在
//			if (begin2 >= n)
//			{
//				begin2 = n;
//				end2 = n - 1;
//			}
//
//			if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
			int index = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
					tmp[index++] = a[begin2++];
			}
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}

			// 把归并小区间拷贝回原数组
			for (int j = i; j < n; j++)
			{
				a[j] = tmp[j];
			}

		}
		gap *= 2;
	}

	free(tmp);
	tmp = NULL;
}

//计数排序
void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);

	for (int i = 0; i < n; i++)
	{
		count[a[i] - min]++;//统计每一个成员出现的次数
	}

	int j = 0;
	for (int i = 0; i < range; ++i)//count数组即每个成员出现的次数
	{
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}

}
