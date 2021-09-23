#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

//��ʼ��
//void Sinit(SL*ps)
//{
//	memset(ps->a,0,MAX*sizeof(ST));
//	ps->size = 0;
//}
//��̬
void Sinit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void check_capacity(SL* ps)
{
	//�ռ�����������
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ST* tmp = realloc(ps->a, newcapacity * sizeof(ST));
		if (tmp == NULL)
		{
			printf("realloc fall\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}

	}
}


void SLPrintf(SL* ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d  ", ps->a[i]);
	}
	printf("\n");
}

//β��
void SLPushBack(SL* ps, ST x)
{
	
	check_capacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

//ͷ��,�Ӻ���ǰ
void SLPushFront(SL* ps, ST x)
{
	check_capacity(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}

//βɾ
void SLPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;

}
//ͷɾ����ǰ����
void SLPopFront(SL* ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}

//����λ�ò���
void SLInsert(SL* ps, int pos, ST x)
{
	assert(pos < ps->size);
	check_capacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}


//����λ��ɾ��
void SLErase(SL* ps, int pos)
{
	assert(pos < ps->size);
	check_capacity(ps);
	int start = pos+1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}

//����
void SLDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//����
int SLFind(SL* ps, ST x)
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

//�޸�
void SLModify(SL* ps, int pos, ST x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;

}