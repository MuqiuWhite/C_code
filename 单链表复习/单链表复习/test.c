#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

ST* Buy(STDataType x)
{
	ST* newnode = (ST*)malloc(sizeof(ST));
	if (newnode == NULL)
		exit(-1);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void Print(ST* phead)
{
	//assert(phead != NULL);
	ST* cur = phead;
	while (cur != NULL)
	{
		printf("%d  ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void PushFront(ST** phead, STDataType x)
{
	assert(phead);
	ST* newnode = Buy(x);
	
	newnode->next = *phead;
	*phead = newnode;
}
void PushBack(ST** phead, STDataType x)
{
	assert(phead);
	ST* newnode = Buy(x);
	
	ST* tail = *phead;
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		while (tail->next!=NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		
		
	}
}
void PopBack(ST** phead)
{
	assert(*phead!=NULL);
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		ST* pre = NULL;
		ST* tail = *phead;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		pre->next = NULL;
	}
}
void PopFront(ST** phead)
{
	assert(*phead);
	ST* next = (*phead)->next;
	
	free(*phead);
	*phead = next;
}
void Insert(ST** phead, ST* pos, STDataType x)
{
	assert(phead!=NULL);
	assert(pos!=NULL);
	ST* newnode = Buy(x);
	ST* pre = *phead;
	
	if (pos == *phead)
	{
		PushFront(phead, x);
	}
	else
	{
		while (pre->next != pos)
		{
			pre = pre->next;
		}
		pre->next = newnode;
		newnode->next = pos;
	}
}
void Erase(ST** phead, ST* pos)
{
	assert(phead != NULL);
	assert(pos != NULL);
	ST* cur = *phead;
	if (pos == *phead)
		PopFront(phead);
	else
	{
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
	}

}
ST* Find(ST* phead, STDataType x)
{
	
	ST* cur = phead;
	while (cur!=NULL)
	{
		if(cur->data==x)
			return cur;
		cur = cur->next;
	}
	return NULL;
	
}
void Des(ST** phead)
{
	assert(phead);
	ST* cur = *phead;
	while (cur)
	{
		ST* next = cur->next;
		free(cur);
		cur = next;
	}
	*phead = NULL;
}
int Size(ST* phead);