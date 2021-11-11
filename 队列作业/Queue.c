#include "Queue.h"

void Init(Queue* ps)
{
	assert(ps);
	ps->head = ps->tail = NULL;
}

void Destory(Queue* ps)
{
	assert(ps);
	QNode* cur = ps->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
//队尾入
void QueuePush(Queue* ps, QDataType x)
{
	assert(ps);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		exit(-1);
	}

	newnode->a = x;
	newnode->next = NULL;
	if (ps->tail == NULL)//空队列
	{
		ps->head = ps->tail = newnode;//赋值
	}
	else
	{
		ps->tail->next = newnode;
		ps ->tail = newnode;
	}
}
//队头出
void QueuePop(Queue* ps)
{
	assert(ps);
	assert(ps->head);//队列不为空
	
	if (ps->head->next == NULL)
	{
		free(ps->head);
		ps->head = ps->tail = NULL;
	}
	else
	{
		
		QNode* next = ps->head->next;
		free(ps->head);
		ps->head = next;
	}
	
}
QDataType QueueBack(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->tail->a;
}
QDataType QueueFront(Queue* ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->a;
}
int size(Queue* ps)
{
	int sz = 0;
	QNode* cur = ps->head;
	while (cur)
	{
		sz++;
		cur = cur->next;
	}
	return sz;
}
bool Empty(Queue* ps)
{
	assert(ps);
	return ps->head == NULL;
}
