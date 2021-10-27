#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"


//��ʼ��
void InitList(DLinkList*& L)
{
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->prior = L->next = NULL;
}
//����˫����
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
//�ж������Ƿ�Ϊ��
bool ListEmpty(DLinkList* L)
{
	return(L->next == NULL);
}
//˫����ĳ���
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
//���˫����
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
//��˫�����е�ĳ��Ԫ�ص�ֵ
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
//��Ԫ��ֵ����
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
//����Ԫ��
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
//ɾ������Ԫ��
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




