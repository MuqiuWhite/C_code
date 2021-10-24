#pragma once

typedef int QDataType;
typedef struct  QueueNode
{
	struct QueueNode* next;
	QDataType a;
}QNode;

struct Queue
{
	QNode* head;
	QNode* tail;

}Queue;

void Init(Queue ps);