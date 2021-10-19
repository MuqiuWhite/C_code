#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SList
{
	SLDataType* arr;
	SLDataType size;
	SLDataType capacity;
}SL;

void Init(SL*ps);
//打印
void Print(SL* ps);
//头插
void PushFront(SL* ps, SLDataType x);
//尾插
void PushBack(SL* ps, SLDataType x);
//头删
void PopFront(SL* ps);
//尾删
void PopBack(SL* ps);
//任意位置插入
void Insert(SL* ps, int n, SLDataType x);
//任意位置删除
void Erase(SL* ps, int n);
