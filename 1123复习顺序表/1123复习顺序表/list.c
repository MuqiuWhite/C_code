#include "list.h"

void init(LT* ps)
{
	ps->data = NULL;
	ps->size = ps->capacity = 0;
}

void Check(LT* ps)
{
	if (ps->size == ps->capacity)
	{
		SLDataType* a = (LT*)malloc(sizeof(LT));
		ps->data = a;
		int c= ps->capacity==0?4: ps->capacity * 2;
		ps->capacity = c;
		
	}
}

void PushFront(LT* ps, SLDataType a)
{
	Check(ps);
	//Insert(ps, 0, a);
	int i = ps->size-1;
	while (i>=0)
	{
		ps->data[i+1] = ps->data[i];
		i--;
	}
	ps->data[0] = a;
	ps->size++;
}
void PushBack(LT* ps, SLDataType a)
{
	Check(ps);
	//Insert(ps, ps->size, a);
	ps->data[ps->size] = a;
	ps->size++;
}
void PopFront(LT* ps)
{

	assert(ps->size>0);
	//Erase(ps, 0);
	int i = 1;
	while (i < ps->size)
	{
		ps->data[i-1] = ps->data[i];
		i++;
	}
	ps->size--;
}
void PopBack(LT* ps)
{
	assert(ps->size>0);
	ps->size--;
	//Erase(ps, ps->size);
}
void print(LT* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}
int Find(LT* ps, SLDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			break;
		}
	}
	return i;
}

void Insert(LT* ps, int n, SLDataType x)//从后往前
{
	int i = ps->size - 1;

	assert(n >= 0||n<=ps->size);
	Check(ps);
	while (i >= n)
	{
		ps->data[i+1] = ps->data[i];
		i--;
	}
	ps->data[n] = x;
	ps->size++;
}

void Erase(LT* ps, int n)//从前往后
{
	assert(n >= 0 || n < ps->size);
	int i = n ;
	while (i < ps->size)
	{
		ps->data[i] = ps->data[i + 1];
		i++;
	}
	ps->size--;
}
void destory(LT* ps)
{
	free(ps->data);
	ps->size = ps->capacity = 0;
}