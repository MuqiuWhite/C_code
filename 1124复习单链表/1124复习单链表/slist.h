#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SL
{
	SLTDataType* data;
	SL* next;
}SL;

void Print(SL* phead);

void PushBack(SL** pphead, SLTDataType x);

void PushFront(SL** pphead, SLTDataType x);
void PopFront(SL** pphead);
void PopBack(SL** pphead);
SL* Find(SL* phead, SLTDataType x);
//void Insert(SL** pphead, int n, SLTDataType x);
void Insert(SL** pphead, SL* pos, SLTDataType x);//在pos前插入，要找到pos

void Erase(SL** pphead, SL* pos);

void Des(SL** pphead);

SL* Create(SLTDataType x);