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
} ListNode;

//初始化
ListNode* ListInit();
//清空
void ListDestory(ListNode* phead);
//尾插
void ListPushBack(ListNode* phead, LTDataType x);
//头插
void ListPushFront(ListNode* phead, LTDataType x);
//尾删
void ListPopBack(ListNode* phead);
//头删
void ListPopFront(ListNode* phead);
//查找
ListNode* ListFind(ListNode* phead, LTDataType x);
//任意节点前插入
void ListInsert(ListNode* pos, LTDataType x);
//任意节点删除
void ListErase(ListNode* pos);
//打印
void ListPrint(ListNode* phead);
//判断空
bool ListEmpy(ListNode* phead);//#include <stdbool.h>
//大小
int size(ListNode* phead);
