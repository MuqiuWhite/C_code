#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void Init(HP* hp);
void Destory(HP* hp);
void Push(HP* hp, HPDataType x);
void Pop(HP* hp);
void AdjustUp(int* a, int n, int c);
void Print(HP* hp);