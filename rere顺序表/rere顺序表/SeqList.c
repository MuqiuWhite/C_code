#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void Init(SL* ps)
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void Check(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int new = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, new * sizeof(SL));
		if (tmp == NULL)
		{
			printf("realloc fall\n");
			exit(-1);
		}
		ps->capacity = new;
		ps->a = tmp;
	}
}

void Print(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d  ", ps->a[i]);
	}
	printf("\n");
}
void PushBack(SL* ps, SLDataType x)
{
	Check(ps);
	ps->a[ps->size] = x;
	ps->size++;

	//Insert(ps,x);
}

void PushFront(SL* ps, SLDataType x)
{
	Check(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;

	//Insert(ps,ps->size-1);
}

void PopFront(SL* ps)
{
	assert(ps->size > 0);
	int b = 1;
	while (b < ps->size)
	{
		ps->a[b - 1] = ps->a[b];
		++b;
	}
	ps->size--;
	//Erase(ps,0);
}

void PopBack(SL* ps)
{
	assert(ps->size>0);
	ps->size--;
	//Erase(ps,ps->size-1);
}

void Des(SL* ps)
{
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

int Find(SL* ps, SLDataType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void Insert(SL* ps, int n, SLDataType x)//从后往前
{
	assert(n >=0||n<=ps->size);//为真就对了，为假报错 
	Check(ps);

	int end = ps->size - 1;
	while (end >= n)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[n] = x;
	ps->size++;
}

void Erase(SL* ps, int n)
{
	assert(n >= 0 && n < ps->size);
	int b = n;
	while (b < ps->size-1)
	{
		ps->a[b] = ps->a[b + 1];
		b++;
	}
	ps->size--;
}