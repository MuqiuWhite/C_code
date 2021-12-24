#include "list.h"

LN* init()
{
	LN* phead = (LN*)malloc(sizeof(LN));
	phead->next = phead->prev =phead;
	return phead;
}
void pushFront(LN* phead, LTDataType x)
{
	LN* newn = create(x);
	LN*next = phead->next;
	newn->next = next;
	next->prev = newn;
	phead->next = newn;
	newn->prev = phead;
}
void pushBack(LN* phead, LTDataType x)
{
	LN* newn = create(x);
	LN* prev = phead->prev;
	newn->next = phead;
	phead->prev = newn;
	prev->next = newn;
	newn->prev =prev;
}
void popFront(LN* phead)
{
	assert(phead->next!=phead);
	LN* cur = phead->next;
	phead->next = cur->next;
	free(cur);
}
void popBack(LN* phead)
{
	assert(phead->next != phead);
	LN* tail = phead->prev;
	LN* prev = tail->prev;
	prev->next=phead;
	phead->prev = prev;
	free(tail);
}
LN* create(LTDataType x)
{
	LN* newn = (LN*)malloc(sizeof(LN));
	newn->data = x;
	newn->next = newn->prev = NULL;
	return newn;
}
void insert(LN* phead, LN* n, LTDataType x)
{
	assert(n);
	LN* newn = create(x);
	LN* prev = n->prev;
	
	newn->next = n;
	n->prev = newn;
	prev->next = n;
	n->prev = prev;
}
void erase(LN* phead, LN* n)
{
	assert(n);
	LN* next = n->next;
	LN* prev = n->prev;
	prev->next = next;
	next->prev = prev;
	free(n);
}
void des(LN* phead)
{
	assert(phead);
	LN* cur = phead->next;
	while (cur)
	{
		LN* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
LN* Find(LN* phead, LTDataType x)
{
	assert(phead->next);
	LN* cur = phead->next;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void print(LN* phead)
{
	assert(phead);
	LN* cur = phead->next;
	while (cur)
	{
		LN* next = cur->next;
		printf("%d ", cur->data);
		cur = next;
	}
	printf("\n");
}