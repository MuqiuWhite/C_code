#include "Heap.h"


void Print(HP* hp)
{
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d  ", hp->a[i]);
	}
	printf("\n");
}
void Init(HP* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}
void Destory(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->size = hp->capacity = 0;
}

void AdjustUp(int *a, int n, int c)
{
	assert(a);
	int p = (c - 1) / 2;//父节点
	while (c>0)
	{
		if (a[c] > a[p])
		{
			HPDataType tmp = a[c];
			a[c] = a[p];
			a[p] = tmp;

			c = p;//把p给c
			p = (c - 1) / 2;//计算交换过后子节点的父节点
		}
		else
		{
			break;
		}
	}
}

void Push(HP* hp, HPDataType x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		size_t newnode = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->a, sizeof(HPDataType) * newnode);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		hp->capacity = newnode;
		hp->a = tmp;
	}
	hp->a[hp->size] = x;
	hp->size++;

	AdjustUp(hp->a, hp->size, hp->size - 1);//向上调整
	//            ，大小    向上调整的起始位置（新插入的数据）
}
void Pop(HP* hp);