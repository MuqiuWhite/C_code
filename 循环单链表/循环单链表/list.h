#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef char SElemType;
#define AGAIN_INIT_SIZE 100
#define AGAININCREAMENT 20
typedef struct LNode
{
    SElemType data;
    struct LNode* next;
}LinkList;


Status InitList(LinkList* L);//初始化链表 
int ListEmpty(LinkList* L);//判断链表是否为空
void CreateList(LinkList* L, SElemType e);//头插法创建单循环链表
void CreateListLast(LinkList* L, SElemType e);//尾插法插入元素
int ListLength(LinkList* L);// 获取链表长度
Status ListDelete(LinkList* L, int i, SElemType* e);//删除线性表中第i位置的元素
Status LocateELem(LinkList* L, SElemType e);//检索值为e的数据元素
int GetElem(LinkList* L, int i, SElemType* e);//获取线性表第i位置的元素
void ShowList(LinkList* plist);