#include "sort.h"
void init(st* t)
{
	t->top = t->capa = 0;
	t->data = NULL;
}
void push(st* t, STDataType x)//栈顶插
{
	if (t->capa == t->top)
	{
		int newC = t->capa == 0 ? 4 : t->capa * 2;
		st* newN = (st*)realloc(t -> data, newC * sizeof(st));
		t->capa = newC;
		t->data = newN;
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
	t->capa=t->top = 0;
	t->data = NULL;
}
int size(st* t);
bool empty(st* t)
{
	return t->top == 0;

}
void PrintArray(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
// 插入排序
void InsertSort(int* a, int n)
{
	assert(a);
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int x = a[end+1];
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = x;
	}
}

// 希尔排序
void ShellSort(int* a, int n)
{
	assert(a);
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 2;
		for (int i = 0; i < n-gap; i++)
		{
			int end = i;
			int x = a[end + gap];
			while (end > 0)
			{
				if (a[i] > x)
				{
					a[end + gap] = a[end];
					end-=gap;
				}
				else
					break;
			}
			a[end + gap] = x;
		}
	}
}
// 选择排序
void SelectSort(int* a, int n)
{
	int begini = 0, endi = n - 1;
	while (begini>endi)
	{
		int maxi = endi, mini = begini;
	
		for (int i = 0; i < n; i++)
		{
			if (a[maxi] < a[i])
				maxi = i;
			if (a[mini] > a[i])
				mini = i;

		}
		Swap(&a[mini], a[begini]);
		if (begini == maxi)
			maxi = mini;
		Swap(&a[endi], &a[maxi]);
		++begini;
		--endi;
	}
	
}


// 堆排序
void AdjustDwon(int* a, int n, int root)
{
	int c = root * 2 + 1;
	while (c < n)//大堆
	{
		if (c + 1 < n && a[c + 1] > a[c])//右孩子大于父亲
		{
			c++;
		}
		if (a[c] > a[root])//孩子大于父亲
		{
			Swap(&a[c], &a[root]);
			root = c;
			c = root * 2 + 1;
		}
		else
			break;
	}
}
void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}
	for (int end = n - 1; end >= 0; end--)
	{
		Swap(&a[end], &a[0]);//当前最大即a[0]换到最后
		AdjustDwon(a, end, 0);//找出次大的
	}
}

// 冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int j = 0;
		for (j = 0; j < n-i-1; j++)
		{
			int f = 1;
			if (a[j+1] < a[j])
			{
				Swap(&a[j + 1], &a[j]);
			}
			if (f == 1)
				break;
		}
		
	}
}

// 快速排序递归实现
int getIndex(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	while (left < right)
	{
		if (a[right] < a[mid])
		{
			if (a[mid] > a[right])
			{
				return mid;
			}
			else if (a[right] < a[left])
			{
				return left;
			}
			else
				return right;
		}
		else // a[left] > a[mid]
		{
			if (a[right] > a[left])
			{
				return left;
			}
			else if (a[mid > a[right]])
				return mid;
			else
				return right;
		}
	}
}
// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int mid = getIndex(a, left, right);
	Swap(&a[left], &a[mid]);
	int key = left;
	while (left<right)
	{
		while (left < right && a[right] >= a[key])
			--right;
		while (left < right && a[left] <= a[key])
			++left;
		Swap(&a[left], &a[right]);

	}
	Swap(&a[left], &a[key]);
	return left;
}
// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int mid = getIndex(a, left, right);
	Swap(&a[left], &a[mid]);
	int key = a[left];
	int p = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			--right;
		}
		a[p] = a[right];
		p = right;
		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[p] = a[left];
		p = left;
		
	}
	a[p] = key;
	return p;
}
// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int mid = getIndex(a, left, right);
	int prev = left;
	int cur = prev + 1;
	Swap(&a[mid], &a[left]);
	int key = left;
	while (cur <= right)
	{
		if (a[cur] < a[key] && (++prev) != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[key], &a[prev]);
	return prev;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	//int k = PartSort1(a, left, right);
	//int k = PartSort2(a, left, right);
	int k = PartSort3(a, left, right);
	QuickSort(a, left, k - 1);
	QuickSort(a, k + 1, right);
}

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	st st;
	init(&st);
	push(&st, left);
	push(&st, right);
	while (!empty(&st))
	{
		int end = top(&st);
		pop(&st);
		int begin= top(&st);
		pop(&st);
		int k = PartSort3(a, begin, end);
		if (k + 1 < end)
		{
			push(&st, k + 1);
			push(&st, end);
		}
		if (begin < k - 1)
		{
			push(&st, begin);
			push(&st, k-1);
		}

	}
	des(&st);
}
