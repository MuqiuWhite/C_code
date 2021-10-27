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

//��ʼ��
void InitList(DLinkList*& L);
//����˫����
void DestroyList(DLinkList* L);
//�ж������Ƿ�Ϊ��
bool ListEmpty(DLinkList* L);
//˫����ĳ���
int ListLength(DLinkList* L);
//���˫����
void DispList(DLinkList* L);
//��˫�����е�ĳ��Ԫ�ص�ֵ
bool GetElem(DLinkList* L, int i, LTDataType& e);
//��Ԫ��ֵ����
int LocateElem(DLinkList* L, LTDataType e);
//����Ԫ��
bool ListInsert(DLinkList*& L, int i, LTDataType e);
//ɾ������Ԫ��
bool ListDelete(DLinkList*& L, int i, LTDataType& e);
