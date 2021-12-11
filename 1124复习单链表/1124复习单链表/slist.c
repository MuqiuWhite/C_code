#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"

void SlistPrint(SL* phead)
{
	SL* current = phead;
	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n\n");
}

//开辟空间
SL* CreatSListNode(SLTDataType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void PushFront(SL** pphead, SLTDataType x)
{
	SL* newnode = Create(x);
	newnode->next = *pphead;
	*pphead = newnode;

}
void PushBack(SL** cur, SLTDataType x)
{
	SL* pphead =* cur;
	SL* a = Create(x);
	if (*cur == NULL)//phead==NULL
	{
		*cur = a;
	}
	while (pphead->next != NULL)
	{
		pphead = pphead->next;
	}
	
	pphead->next = a;

}
void PopFront(SL** pphead)
{
	assert(*pphead);
	
	SL* cur = (*pphead)->next;
	free(*pphead);
	*pphead = cur;
	
	
}
void PopBack(SL** pphead)
{
	assert(*pphead);
	SL* cur = *pphead;
	SL* prev = NULL;
	if (cur->next == NULL)
	{
		free(cur);
		cur = NULL;
	}
	else
	{

		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		prev->next = NULL;
	}
}
SL* Find(SL* phead, SLTDataType x)
{
	assert(phead);
	SL* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void Insert(SL** pphead, SL* pos, SLTDataType x)//在pos前插入，要找到pos
{
	SL* cur = *pphead;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	SL* a = Create(x);
	SL* next = cur->next;
	cur->next = a;
	a->next = next;
}
void Erase(SL** pphead, SL* pos)
{
	assert(*pphead);
	SL* cur = *pphead;
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	
	SL* next = cur->next;
	cur->next = next;
	free(pos);

}
void des(SL** ps)
{
	free((*ps)->data);
	
}