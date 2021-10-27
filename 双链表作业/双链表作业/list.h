#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef char LTDataType;

typedef struct DNode
{
	LTDataType data;
	struct DNode* prior;
	struct DNode* next;
}DLinkList;

//初始化
void InitList(DLinkList*& L);
//销毁双链表
void DestroyList(DLinkList* L);
//判断链表是否为空
bool ListEmpty(DLinkList* L);
//双链表的长度
int ListLength(DLinkList* L);
//输出双链表
void DispList(DLinkList* L);
//求双链表中的某个元素的值
bool GetElem(DLinkList* L, int i, LTDataType& e);
//按元素值查找
int LocateElem(DLinkList* L, LTDataType e);
//插入元素
bool ListInsert(DLinkList*& L, int i, LTDataType e);
//删除数据元素
bool ListDelete(DLinkList*& L, int i, LTDataType& e);
