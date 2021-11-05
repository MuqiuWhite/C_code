#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType a;
}QNode;
typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void Init(Queue* ps);
void Destory(Queue* ps);
//队尾入
void QueuePush(Queue* ps, QDataType x);
//队头出
void QueuePop(Queue* ps);
QDataType QueueBack(Queue* ps);
QDataType QueueFront(Queue* ps);
int size(Queue* ps);
bool Empty(Queue* ps);