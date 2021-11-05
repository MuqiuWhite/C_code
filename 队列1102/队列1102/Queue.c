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
	while (cur != NULL)//如果写成cur!=ps->tail，那么tail处没有销毁
	{
		QNode* next = cur->next;//及时保存下一个，否则删了当前cur找不到下一个cur了
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
	newnode->a = x;
	newnode->next = NULL;
	if (ps->tail == NULL)
	{
		ps->tail = ps->head = newnode;
	}
	else
	{
		ps->tail->next = newnode;
		ps->tail= newnode;
	}
}
//队头出
void QueuePop(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));//该语句为假就报错
	QNode* next = ps->head->next;
	free(ps->head);
	ps->head= next;
	if (ps->head == NULL)
	{
		ps->tail = NULL;//当head为空时，tail也空了，等下次再加入时使用tail则为使用野指针
	}
}
QDataType QueueBack(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));
	return ps->tail->a;
}
QDataType QueueFront(Queue* ps)
{
	
	assert(ps);
	assert(!Empty(ps));
	return ps->head->a;
}
int size(Queue* ps)
{
	assert(ps);
	int n = 0;
	QNode* cur = ps->head;
	while (cur != NULL)
	{
		n++;
		cur = cur->next;
	}

	return n;
}
bool Empty(Queue* ps)
{
	assert(ps);
	return ps->head == NULL;
}