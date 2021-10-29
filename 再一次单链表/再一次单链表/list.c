#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void Print(SL* phead)
{
	SL* cur=phead;
	while (cur!=NULL)
	{
		printf("%d-> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SL* Find(SL *phead, STDataType x)
{
	SL* cur = phead;
	while (cur!=NULL)
	{
		if (cur->data == x)
		{
			return cur;
			
		}
		cur = cur->next;
	}
	return NULL;
}
void Destory(SL** phead)
{
	assert(phead);
	SL* cur = *phead;
	while (cur)
	{
		SL* next = cur->next;
		free(cur);
		cur = next;
	}	
	*phead = NULL;
}
SL* Create(STDataType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	if (newnode == NULL)
	{
		printf("newnode Fall\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void PushFront(SL** phead, STDataType x)
{
	assert(phead);//判断传过来的指针是否为指针地址
	SL* newnode = Create(x);
	newnode->next = *phead;
	*phead = newnode;
}
void PushBack(SL** phead, STDataType x)
{
	assert(phead);//判断传过来的指针是否为指针地址
	SL* newnode = Create(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		SL* cur = *phead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
void PopBack(SL** phead)
{

	if (*phead == NULL)
	{
		return;
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SL* prev = NULL;
		SL* tail = *phead;
		while (tail->next!=NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}
void PopFront(SL** phead)
{
	assert(*phead != NULL);
	SL* next = (*phead)->next;
	free(*phead);
	*phead = next;
}
void Insert(SL** phead, SL* n, STDataType x)
{
	assert(n);
	assert(phead);//判断传过来的指针是否为指针地址
	SL* newnode = Create(x);
	if (n == *phead)
	{
		PushFront(phead, x);
	}
	else
	{
		SL* prev = *phead;
		while (prev->next!= n)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = n;
	}
}

//void Insert_re(SL* pos, STDataType x)
//{
//  assert(n);
//	SL* newnode = Create(x);
//	newnode->next = pos->next;
//	pos->next = newnode;
//}
//void Erase_re(SL*pos)
//{
//  assert(n);
//	SL* next = pos->next;
//	pos->next = next->next;
//	free(next);
//}
void Erase(SL** phead, SL* n)
{
	assert(n);
	assert(phead);//判断传过来的指针是否为指针地址
	if (n == *phead)
	{
		PopFront(phead);
		/**phead = n->next;
		free(n);*/
	}
	SL* cur = *phead;
	while(cur->next!=n)
	{
		cur = cur->next;
	}
	cur->next = n->next;
	free(n);//n是形参，置空也不会改变实参n
}
