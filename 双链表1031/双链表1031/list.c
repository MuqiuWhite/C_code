#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
LTNode* Init()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
LTNode* Buy(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void Print(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d  ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void PushBack(LTNode* phead, LTDataType x)
{
	assert(phead != NULL);
	LTNode* newnode = Buy(x);
	LTNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;

	//Insert(phead, x);
}
void PushFront(LTNode* phead, LTDataType x)
{
	assert(phead != NULL);
	LTNode* newnode = Buy(x);
	LTNode* next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;

	//Insert(phead->next, x);
}

void PopBack(LTNode* phead)
{
	assert(phead != NULL);
	assert(phead->next !=phead );
	LTNode* tail = phead->prev;
	LTNode* pre = tail->prev;
	phead->prev = pre;
	pre->next = phead;
	free(tail);
	tail = NULL;

	//Erase(phead->prev);
}
void PopFront(LTNode* phead)
{
	assert(phead != NULL);
	LTNode* next = phead->next;
	LTNode* nextNext = next->next;
	phead->next = nextNext;
	nextNext->prev = phead;

	//Erase(phead->next);
}
LTNode* Find(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void Insert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* n = Buy(x);
	LTNode* pre = pos->prev;
	pre->next = n;
	n->prev = pre;
	n->next = pos;
	pos->prev = n;
}
void Erase(LTNode* pos)
{
	assert(pos);
	LTNode* pre = pos->prev;
	LTNode* next = pos->next;
	pre->next = next;
	next->prev = pre;
	//pre->next=next;next->prev=pre;
	free(pos);
}
void Des(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	
}