#include "stack.h"

void init(st* t)
{
	t->top = t->capa = 0;
	t->data = NULL;
}
void push(st* t, STDataType x)//Õ»¶¥²å
{
	
	if (t->capa == t->top)
	{
		int newCapa = t->capa == 0 ? 4 : t->capa * 2;
		st* newn = (st*)realloc(t->data,newCapa*sizeof(st));
		t->capa = newCapa;
		t->data = newn;

	}
	t->data[t->top] = x;
	t->top++;
}
void pop(st* t)//Õ»¶¥É¾
{
	assert(t);
	assert(t->top>0);
	t->top--;
}
STDataType top(st* t)
{
	assert(t);
	assert(t->top > 0);
	return t->data[t->top-1];
}
void des(st* t)
{
	
	free(t->data);
	t->top = t->capa = 0;
	free(t);
}
int size(st* t)
{
	return t->top + 1;
}
bool empty(st* t)
{
	return t->top == 0;
}