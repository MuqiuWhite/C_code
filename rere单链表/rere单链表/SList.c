#include "SList.h"
void Print(SL* phead)
{

	SL* cur = phead;
	while (cur != NULL)
	{
		printf("%d->  ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SL* Create(SLTDataType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	if (newnode != NULL)
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
	else
	{
		exit(-1);
	}
	
}
void PushBack(SL**pphead, SLTDataType x)
{
	/*SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = x;
	newnode->next = NULL;*/

	SL* newnode = Create(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SL* tail = *pphead;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void PushFront(SL** pphead, SLTDataType x)
{
	SL* newnode = Create(x);
	newnode->next = *pphead;
	*pphead = newnode;

}

void PopFront(SL** pphead)
{
	assert(*pphead != NULL);
	
	SL* next = (*pphead)->next;
	free(*pphead);
	*pphead = NULL;

}
void PopBack(SL** pphead)
{
	assert(*pphead != NULL);//������
	if ((*pphead)->next == NULL)//ֻʣһ���ڵ�
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//�������Ͻڵ�
	{
		SL* tail = *pphead;
		SL* prev = NULL;//û�����Ļ���ɾ����βָ���next��û�ÿ�
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;//Ҫɾ����ָ���ÿ�
		prev->next = NULL;

		/*while (tail->next->next) ��һ�ַ���
		{
			tail = tail->next;
		}
		free(tail);
		tail->next = NULL;*/
	}

}

SL* Find(SL* phead, SLTDataType x)
{
	SL* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//void Insert(SL** pphead, int n, SLTDataType x);
void Insert(SL** pphead, SL* pos, SLTDataType x)//��posǰ���룬Ҫ�ҵ�pos
{
	SL* cur = *pphead;//��posǰһ��
	SL* newnode = Create(x);
	if (pos == *pphead)
	{
		newnode->next = *pphead;
		*pphead = newnode;

	}
	else
	{
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		pos->next = newnode->next;
		newnode->next = pos;
	}
}
void Erase(SL** pphead, SL* pos);

void Des(SL** pphead);
