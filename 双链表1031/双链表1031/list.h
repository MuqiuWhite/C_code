#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
} LTNode;

LTNode* Init();
LTNode* Buy(LTDataType x);
void Print(LTNode* phead);
void PushBack(LTNode* phead,LTDataType x);
void PushFront(LTNode* phead, LTDataType x);
void PopBack(LTNode* phead);
void PopFront(LTNode* phead);
LTNode* Find(LTNode* phead, LTDataType x);
void Insert(LTNode*pos,LTDataType x);
void Erase(LTNode* pos);
void Des(LTNode* phead);
