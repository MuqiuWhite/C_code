#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
bool InitList(LinkList* L)//��ʼ������ 
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

int ListEmpty(LinkList* L)//�ж������Ƿ�Ϊ��
{
    if (L->next == L)
        return TRUE;//�� 
    else
        return FALSE;//�ǿ� 
}


void CreateList(LinkList* L, SElemType e)//ͷ�巨������ѭ������
{
    LinkList* p;
    p = (LinkList*)malloc(sizeof(LinkList));
    p->data = e;
    p->next = L->next;
    L->next = p; //���뵽��ͷ
}


void CreateListLast(LinkList* L, SElemType e)//β�巨����Ԫ��
{
    LinkList* p = L, * q;
    int i;
    while (p->next != L)
    {
        p = p->next;
    }
    q = (LinkList*)malloc(sizeof(LinkList));//�����½��
    q->data = e;
    q->next = p->next; 
    p->next = q; 
    q->next = L; 
}



int ListLength(LinkList* L)// ��ȡ������
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



Status ListDelete(LinkList* L, int i, SElemType* e)//ɾ�����Ա��е�iλ�õ�Ԫ��
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
    free(q);//�ͷ�ɾ�������ڴ�
    return TRUE;
}



Status LocateELem(LinkList* L, SElemType e)//��ѯ����Ԫ��e��������λ��
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
    return FALSE;//û�ҵ�Ԫ�� 
}


int GetElem(LinkList* L, int i, SElemType* e)//��ȡ���Ա��iλ�õ�Ԫ��
{
    LinkList* p = L->next;
    int j = 1;
    if (p == L || i < 1)//if(p==NULL||i<j)//���Ʋ��� i�ĺϷ��� 
        return FALSE;
    while (j < i)
    {
        p = p->next;
        j++;
    }
    *e = p->data;
    return TRUE;
}