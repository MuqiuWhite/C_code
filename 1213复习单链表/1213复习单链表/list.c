#include "list.h"

SL* buy(SLDatatype x)
{
	SL* newn = (SL*)malloc(sizeof(SL));
	newn->data = x;
	newn->next = NULL;
	return newn;
}
void pushfront(SL** ps, SLDatatype x)
{
	SL* newn = buy(x);	
	newn->next = *ps;
	*ps = newn;
	
}
void pushback(SL** ps, SLDatatype x)
{
	SL* newn = buy(x);
	SL* cur = *ps;
	if (cur == NULL)
	{
		cur = newn;

	}
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newn;
}
void popfront(SL** ps)
{
	assert(*ps!=NULL);
	SL* cur = *ps;
	SL* next = (*ps)->next;
	free(cur);
	*ps = next;
}
void popback(SL** ps)
{
	assert(*ps);
	SL* cur = *ps;
	if (*ps==NULL)
	{
		return;
	}
	else if ((*ps)->next == NULL)
	{
		free(*ps);
		*ps = NULL;
	}
	else
	{
		SL* pre = *ps;
		SL* tail = *ps;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		pre->next = NULL;
		
	}
}
void insert(SL** ps, SL* n, SLDatatype x)
{
	SL* cur = *ps;
	SL* newn = buy(x);
	if (n==*ps)
	{
		/*newn->next = *ps;
		*ps = newn;*/
		pushfront(ps, x);
	}
	else
	{
		while (cur->next!= n)
		{
			cur = cur->next;
		}
		cur->next = newn;
		newn->next = n;
		
	}
	
}
void erase(SL** ps, SL*n)
{
	assert(ps);

	if (*ps == n)
	{
		popfront(ps);
		*ps = n->next;
		free(n);
	}
	SL* cur = *ps;
	while (cur->next != n)
	{
		cur = cur->next;
	}
	
	cur->next = n->next;
	free(cur);
}
void des(SL** ps)
{
	assert(ps);
	SL* cur = *ps;
	while (cur)
	{
		SL* next = cur->next;
		free(cur);
		cur = next;
	}
	*ps = NULL;
}
void print(SL* ps)
{
	assert(ps);
	while (ps)
	{
		printf("%d->", ps->data);
		ps = ps->next;
	}
	printf("NULL\n");
}
SL* find(SL* ps, SLDatatype x)
{
	assert(ps);
	SL* cur = ps;
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