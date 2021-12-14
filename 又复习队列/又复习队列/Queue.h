#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

typedef int QDataType;
typedef struct QN
{
	struct QN* next;
	QDataType data;
}QN;

typedef struct Queue
{
	QN* head;
	QN* tail;
}Queue;

void init(Queue* ps);
void Push(Queue* ps, QDataType x);
void Pop(Queue* ps);
QDataType QueueFront(Queue* ps);
QDataType QueueBack(Queue* ps);
int size(Queue* ps);
bool Empty(Queue* ps);
void des(Queue* ps);