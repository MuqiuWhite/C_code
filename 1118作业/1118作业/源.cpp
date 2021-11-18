#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>

void AdjustDown(int* a,int n, int f)
{
	assert(a);
	int c = f * 2 + 1;//��ڵ�
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
		else//����С�ں��Ӿ�ֹͣ
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
		if (a[f] > a[c])//С��
		{
			Swap(&a[c], &a[f]);
			//HPDataType tmp = a[c];
			/*a[c] = a[f];
			a[f] = tmp;*/
			c = f;
			f = (c - 1) / 2;
		}
		else//����С�ں��Ӿ�ֹͣ
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)//����
{
	//for (int i = 0; i < n; i++)//С��
	//{
	//	AdjustUP(a, i);
	//}

	//���
	for (int i = (n - 1-1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	//����,ѡ�����������һ������
	for (int e = n - 1; e > 0;e--)
	{
		Swap(&a[0], &a[e]);
		//�ٵ��ѣ�����ѡ����С����
		AdjustDown(a, e, 0);
	}
}