#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int STDataType;
typedef struct List
{
	STDataType data;
	struct List* next;
}SL;

void Print(SL *phead);
void Destory(SL** phead);
SL* Create(STDataType x);
void PushFront(SL** phead, STDataType x);
void PushBack(SL** phead, STDataType x);
void PopBack(SL** phead);
void PopFront(SL** phead);
void Insert(SL** phead, SL* n, STDataType x);
void Erase(SL** phead, SL* n);
SL* Find(SL* phead, STDataType x);

void Insert_re(SL* pos, STDataType x);
void Erase_re(SL* pos);