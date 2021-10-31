#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int STDataType;
typedef struct ST
{
	STDataType* data;
	struct ST* next;
}ST;

ST* Buy(STDataType x);
void Print(ST* phead);
void PushFront(ST** phead, STDataType x);
void PushBack(ST** phead, STDataType x);
void PopBack(ST** phead);
void PopFront(ST** phead);
void Insert(ST** phead, ST* pos, STDataType x);
void Erase(ST** phead, ST* pos);
ST* Find(ST* phead, STDataType x);
void Des(ST** phead);
int Size(ST* phead);
