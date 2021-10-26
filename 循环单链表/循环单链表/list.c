#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
bool InitList(LinkList* L)//初始化链表 
{
    L->next = L; 
    return TRUE;
}
void ShowList(LinkList* plist)
{
    LinkList* pCur = plist->next;
    while (NULL != pCur)
    {
        printf("%c", pCur->data);
        pCur = pCur->next;
    }
    printf("\n");
}

int ListEmpty(LinkList* L)//判断链表是否为空
{
    if (L->next == L)
        return TRUE;//空 
    else
        return FALSE;//非空 
}


void CreateList(LinkList* L, SElemType e)//头插法创建单循环链表
{
    LinkList* p;
    p = (LinkList*)malloc(sizeof(LinkList));
    p->data = e;
    p->next = L->next;
    L->next = p; //插入到表头
}


void CreateListLast(LinkList* L, SElemType e)//尾插法插入元素
{
    LinkList* p = L, * q;
    int i;
    while (p->next != L)
    {
        p = p->next;
    }
    q = (LinkList*)malloc(sizeof(LinkList));//生成新结点
    q->data = e;
    q->next = p->next; 
    p->next = q; 
    q->next = L; 
}



int ListLength(LinkList* L)// 获取链表长度
{
    int length = 0;
    LinkList* p;
    p = L->next;
    while (p != L) 
    {
     
        p = p->next;
        length++;
    }
    return length;
}



Status ListDelete(LinkList* L, int i, SElemType* e)//删除线性表中第i位置的元素
{
    LinkList* p = L->next;
    LinkList* q;
    int j = 0;
    while (j < i - 2)
    {
        p = p->next;
        j++;
    }
    if (i < 0 || p == L)
    {
        return FALSE;
    }
    q = p->next;
    *e = q->data;
    p->next = q->next;
    free(q);//释放删除结点的内存
    return TRUE;
}



Status LocateELem(LinkList* L, SElemType e)//查询数据元素e，返回其位置
{
    LinkList* p = L->next;
    int j = 1;
    while (p != L)
    {
        if (p->data == e)
        {
            return j;
        }
        j++;
        p = p->next;
    }
    return FALSE;//没找到元素 
}


int GetElem(LinkList* L, int i, SElemType* e)//获取线性表第i位置的元素
{
    LinkList* p = L->next;
    int j = 1;
    if (p == L || i < 1)//if(p==NULL||i<j)//控制参数 i的合法性 
        return FALSE;
    while (j < i)
    {
        p = p->next;
        j++;
    }
    *e = p->data;
    return TRUE;
}