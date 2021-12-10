#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SL
{
	SLDataType* data;
	struct SL* next;
}SL;

void print(SL* phead);
void insert(SL** phead, SL* n, SLDataType  x);
void erase(SL** phead, SL* n);
void pushfront(SL** phead, SLDataType x);
void pushback(SL** phead, SLDataType x);
void popfront(SL** phead);
void popback(SL** phead);
SL* find(SL* phead, SLDataType x);
void destory(SL** phead);
SL* create(SLDataType x);