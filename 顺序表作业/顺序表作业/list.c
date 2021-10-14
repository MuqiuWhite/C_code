#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

//����
int Size(SList* ps)
{
	return ps->size;
}
//�������
void check(SList* ps)
{

	if (ps->size == ps->capacity)
	{		
		if (ps->capacity == 0)
		{
			ps->capacity = 4;
		}
		else
			ps->capacity=ps->capacity * 2;
		int newspace = ps->capacity;
		SList* space = realloc(ps->data, sizeof(SList) * newspace);
		if (space != NULL)
		{
			ps->data = space;
			ps->capacity = newspace;
		}
		else
		{
			printf("capacity null\n");
			return;
		}
	}

}

//��ʼ��
void init_list(SList* ps)
{
	ps->capacity = 0;
	ps->data = NULL;
	ps->size = 0;
}

//��ӡ
void print_list(SList* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%c  ", ps->data[i]);
	}
	printf("\n");
}


//ͷ��
void PushFront(SList* ps, ElemType x)
{
	check(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->data[end + 1] = ps->data[end];
		end--;
	}
	ps->data[0] = x;
	ps->size++;
}

//β��
void PushBack(SList* ps, ElemType x)
{
	check(ps);
	ps->data[ps->size] = x;
	ps->size++;
}

//ͷɾ
void PopFront(SList* ps)
{
	assert(ps->size > 0);
	int head = 1;
	while (head < ps->size)
	{
		ps->data[head - 1] = ps->data[head];
		head++;
	}
	ps->size--;
}

//βɾ
void PopBack(SList* ps)
{
	assert(ps->size > 0);
	ps->size -- ;
}

//����ڵ�ǰ����
void insert(SList* ps, int n, ElemType x)
{
	assert(n <= ps->size);
	check(ps);
	int end = ps ->size-1;
	int head = n;
	while (end>=head)
	{
		ps->data[end + 1] = ps->data[end];
		end--;
	}
	ps->data[head] = x;
	ps->size++;
}

//����ڵ�ɾ��
void del(SList* ps, int n)
{
	assert(n <= ps->size);
	int head = n + 1;
	while (head < ps->size)
	{
		ps->data[head-1] = ps->data[head];
		head++;
	}
	ps->size--;
}

//����
int ser(SList* ps, ElemType x)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->data[i] == x)
		{
			return i;
			//printf("%d\n", i);
		}
	}
	return -1;
	//printf("�Ҳ���");
}

//����ĳλ��Ԫ��
void ser_pos(SList* ps, int n)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (i == n)
		{
			printf("����%c\n",ps->data[i]);
			return;
		}
	}
	printf("�Ҳ���\n");
}
//����
void destory(SList* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//�޸�
void mod(SList* ps, int n, ElemType x)
{
	assert(n < ps->size);
	ps->data[n] = x;
}