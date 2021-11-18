#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>

void AdjustDown(int* a,int n, int f)
{
	assert(a);
	int c = f * 2 + 1;//左节点
	while (c<n)
	{
		if (c + 1 && a[c + 1] > a[c])
		{
			c++;
		}

		if (a[f] < a[c])
		{
			
			Swap(&a[c], &a[f]);
			//HPDataType tmp = a[c];
			/*a[c] = a[f];
			a[f] = tmp;*/
			f = c;
			c = f * 2 + 1;
		}
		else//父亲小于孩子就停止
		{
			break;
		}
	}
	
	
}
void AdjustUP(int* a, int c)
{
	int f = (c - 1) / 2;
	while (c > 0)
	{
		if (a[f] > a[c])//小堆
		{
			Swap(&a[c], &a[f]);
			//HPDataType tmp = a[c];
			/*a[c] = a[f];
			a[f] = tmp;*/
			c = f;
			f = (c - 1) / 2;
		}
		else//父亲小于孩子就停止
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)//升序
{
	//for (int i = 0; i < n; i++)//小堆
	//{
	//	AdjustUP(a, i);
	//}

	//大堆
	for (int i = (n - 1-1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	//调整,选出最大的数与第一个交换
	for (int e = n - 1; e > 0;e--)
	{
		Swap(&a[0], &a[e]);
		//再调堆，依次选出次小的数
		AdjustDown(a, e, 0);
	}
}