#include "list.h"

void print(SL* phead)
{
	assert(phead);
	while (phead != NULL)
	{
		print("%d ", phead->data);
	}
	printf("\n");
}
void insert(SL** phead, SL* n, SLDataType  x)
{
	assert(phead);
	if ((*phead) == n)
	{
		pushfront(phead, x);
	}
	SL* new = create(x);
	SL* pre = NULL;
	while (pre->next!=n)
	{
		pre = pre->next;
	}
	pre->next = new;
	new->next = n;
}
void erase(SL** phead, SL* n)
{
	assert(*phead);
	if ((*phead) == n)
	{
		popfront(phead);
	}

	SL* cur = *phead;
	while (cur ->next!= n)
	{
		cur = cur->next;
	}
	cur->next = n->next;
	free(n);

}
void pushfront(SL** phead, SLDataType x)
{
	assert(phead);
	SL* new = create(x);
	new->next = *phead;
	*phead= new;
}
void pushback(SL** phead, SLDataType x)
{
	assert(phead);
	SL* new = create(x);
	SL* cur = *phead;
	if ((*phead) == NULL)
		*phead = new;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = new;
}
void popfront(SL** phead)
{
	assert(*phead!=NULL);

	SL*next = (*phead)->next;
	free(*phead);
	*phead = next;
}
void popback(SL** phead)
{
	assert(*phead != NULL);
	SL* cur = *phead;
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	SL* prev = NULL;
	while (cur->next)
	{
		prev = cur;
		cur = cur->next;		
	}

	free(cur);
	prev->next = NULL;
}
SL* find(SL* phead, SLDataType x)
{
	assert(phead != NULL);
	SL* cur = phead;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void destory(SL** phead)
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
SL* create(SLDataType x)
{
	SL* new = (SL*)malloc(sizeof(SL));
	new->data = x;
	new->next = NULL;
	return new;
}