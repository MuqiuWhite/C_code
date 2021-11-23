#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct LIST
{
	SLDataType* data;
	int capacity;
	int size;
}LT;

void init(LT* ps);
void PushFront(LT* ps,SLDataType a);
void PushBack(LT* ps, SLDataType a);
void PopFront(LT* ps);
void PopBack(LT* ps);
void print(LT* ps);
int Find(LT* ps, SLDataType x);
void Insert(LT* ps, int n, SLDataType x);
void Erase(LT* ps, int n);
void destory(LT* ps);

