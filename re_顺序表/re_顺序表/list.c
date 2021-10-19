#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void Init(SL* ps)
{
	ps->size = 0;
	ps->capacity = 0;
	ps->arr = NULL;
}
//打印
void Print(SL* ps)
{
	
	if (ps->size==0)
	{
		printf("空\n");
	}
	else
	{
		for (int i = 0; i < ps->size; i++)
		{
			printf("%d ", ps->arr[i]);
		}
		printf("\n\n");
	}
}
//检查容量
void Check(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* p = realloc(ps->arr, newcapacity * sizeof(SL));
		if (p == NULL)
		{
			printf("realloc null\n");
			exit(-1);
		}
		else
		{
			ps->arr = p;
			ps->capacity = newcapacity;
		}
	}
}
//头插
void PushFront(SL* ps, SLDataType x)
{
	Check(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->arr[end+1] = ps->arr[end];
		end--;
	}
	ps->arr[0] = x;
	ps->size++;

	//Insert(ps,0,x);
}

//尾插
void PushBack(SL* ps, SLDataType x)
{
	Check(ps);
	ps->arr[ps->size] = x;
	ps->size++;

	//Insert(ps,ps->size,x);
}

//头删
void PopFront(SL* ps)
{
	assert(ps->size>0);
	int first = 1;
	while (first < ps->size)
	{
		ps->arr[first - 1] = ps->arr[first];
		first++;
	}
	ps->size--;

	//Erase(ps,0);
}
//尾删
void PopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;

	//Erase(ps,ps->size-1);
}
//任意位置前插入
void Insert(SL* ps, int n, SLDataType x)
{
	assert(n <= ps->size);
	Check(ps);
	int end = ps->size - 1;
	while (end >= n)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}
	ps->arr[n] = x;
	ps->size++;
}
//任意位置删除
void Erase(SL* ps, int n)
{
	assert(n < ps->size);
	Check(ps);
	int first = n + 1;
	while (first <= n)
	{
		ps->arr[first - 1] = ps->arr[first];
		first++;
	}
	ps->size--;
}
//销毁
void Des(SL* ps)
{
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
//查找
int Find(SL* ps, SLDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//修改
void Mod(SL* ps, int n, SLDataType x)
{
	assert(n < ps->size);
	ps->arr[n] = x;
}