#include "Queue.h"

void init(Queue* ps)
{
	ps->head = ps->tail = NULL;
}
void Push(Queue* ps, QDataType x)
{
	QN* newn = (QN*)malloc(sizeof(QN));
	newn->data = x;
	newn->next = NULL;
	if (ps->tail == NULL)
	{
		ps->head=ps->tail = newn;
		
	}
	ps->tail->next = newn;
	ps->tail = newn;
}
void Pop(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));
	QN* next = ps->head->next;
	free(ps->head);
	ps->head = next;
	if (ps->head == NULL)
		ps->tail=NULL;

	
	
}
QDataType QueueFront(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));
	return ps->head->data;
}
QDataType QueueBack(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));
	return ps->tail->data;
}
int size(Queue* ps)
{
	assert(ps);
	QN* cur = ps->head;
	int i = 0;
	while (cur)
	{
		cur = cur->next;
		i++;
	}
	return i;
}
bool Empty(Queue* ps)
{
	assert(ps);
	return ps->head == NULL;
}

void des(Queue* ps)
{
	QN* cur = ps->head;
	while (cur)
	{
		QN* next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}