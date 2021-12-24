#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int LTDataType;

typedef struct LN
{
	struct LN* prev;
	struct LN* next;
	LTDataType data;
}LN;

LN* init();
void pushFront(LN* phead, LTDataType x);
void pushBack(LN* phead, LTDataType x);
void popFront(LN* phead);
void popBack(LN* phead);
LN* create(LTDataType x);
void insert(LN* phead, LN* n, LTDataType x);
void erase(LN* phead, LN* n);
void des(LN* phead);
LN* Find(LN* phead, LTDataType x);
void print(LN* phead);
