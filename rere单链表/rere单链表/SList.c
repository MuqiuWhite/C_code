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
	assert(*pphead != NULL);//空链表
	if ((*pphead)->next == NULL)//只剩一个节点
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//两个以上节点
	{
		SL* tail = *pphead;
		SL* prev = NULL;//没有它的话，删掉后，尾指针的next就没置空
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;//要删除的指针置空
		prev->next = NULL;

		/*while (tail->next->next) 另一种方法
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
void Insert(SL** pphead, SL* pos, SLTDataType x)//在pos前插入，要找到pos
{
	SL* cur = *pphead;//找pos前一个
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
