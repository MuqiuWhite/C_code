#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"


//初始化
void InitList(DLinkList*& L)
{
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->prior = L->next = NULL;
}
//销毁双链表
void DestroyList(DLinkList* L)
{
	DLinkList* p = L, * q = p->next;
	while (q != NULL)
	{
		free(p);
		p = q;
		q = p->next;
	}
	free(p);
}
//判断链表是否为空
bool ListEmpty(DLinkList* L)
{
	return(L->next == NULL);
}
//双链表的长度
int ListLength(DLinkList* L)
{
	DLinkList* p = L;
	int i = 0;
	while (p->next != NULL)
	{
		i++;
		p = p->next;
	}
	return i;
}
//输出双链表
void DispList(DLinkList* L)
{
	DLinkList* p = L->next;
	while (p != NULL)
	{
		printf(" %c ", p->data);
		p = p->next;
	}
	printf("\n");
}
//求双链表中的某个元素的值
bool GetElem(DLinkList* L, int i, LTDataType& e)
{
	int j = 0;
	DLinkList* p = L;
	while (j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
		return false;
	else
	{
		e = p->data;
		return true;
	}

}
//按元素值查找
int LocateElem(DLinkList* L, LTDataType e)
{
	int n = 1;
	DLinkList* p = L->next;
	while (p != NULL && p->data != e)
	{
		n++;
		p = p->next;
	}
	if (p == NULL)
		return 0;
	else
		return n;
}
//插入元素
bool ListInsert(DLinkList*& L, int i, LTDataType e)
{
	int j = 0;
	DLinkList* p = L, * s;
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
		return false;
	else
	{
		s = (DLinkList*)malloc(sizeof(DLinkList));
		s->data = e;
		s->next = p->next;
		if (p->next != NULL)
			p->next->prior = s;
		s->prior = p;
		p->next = s;
		return true;
	}
}
//删除数据元素
bool ListDelete(DLinkList*& L, int i, LTDataType& e)
{
	int j = 0;
	DLinkList* p = L, * q;
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
		return false;
	else
	{
		q = p->next;
		if (q == NULL)
			return false;
		e = q->data;
		p->next = q->next;
		if (p->next != NULL)
			p->next->prior = p;
		free(q);
		return true;
	}
}




