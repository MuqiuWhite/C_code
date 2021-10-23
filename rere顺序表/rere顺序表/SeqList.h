#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

void Print(SL* ps);

void Init(SL* ps);

void PushBack(SL* ps, SLDataType x);

void PushFront(SL* ps, SLDataType x);

void PopFront(SL* ps);

void PopBack(SL* ps);

void Des(SL* ps);

int Find(SL* ps, SLDataType x);

void Insert(SL* ps, int n, SLDataType x);

void Erase(SL* ps, int n);
