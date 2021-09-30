#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//指针
}SLTNode;

//打印
void SlistPrint(SLTNode* phead);
//创建空间
SLTNode* CreatSListNode(SLTDataType x);
//尾插
void SListPushBack(SLTNode**pphead, SLTDataType x);
//头插
void SListPushFront(SLTNode** pphead, SLTDataType x);
//尾删
void SListPopBack(SLTNode** pphead);
//头删
void SListPopFront(SLTNode** pphead);
//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//任意的pos节点前面插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//任意pos节点删除
void SListErase(SLTNode** pphead, SLTNode* pos);
