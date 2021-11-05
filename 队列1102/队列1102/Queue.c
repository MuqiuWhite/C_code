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
	while (cur != NULL)//���д��cur!=ps->tail����ôtail��û������
	{
		QNode* next = cur->next;//��ʱ������һ��������ɾ�˵�ǰcur�Ҳ�����һ��cur��
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
//��β��
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
//��ͷ��
void QueuePop(Queue* ps)
{
	assert(ps);
	assert(!Empty(ps));//�����Ϊ�پͱ���
	QNode* next = ps->head->next;
	free(ps->head);
	ps->head= next;
	if (ps->head == NULL)
	{
		ps->tail = NULL;//��headΪ��ʱ��tailҲ���ˣ����´��ټ���ʱʹ��tail��Ϊʹ��Ұָ��
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