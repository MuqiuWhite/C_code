#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//ָ��
}SLTNode;

//��ӡ
void SlistPrint(SLTNode* phead);
//�����ռ�
SLTNode* CreatSListNode(SLTDataType x);
//β��
void SListPushBack(SLTNode**pphead, SLTDataType x);
//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x);
//βɾ
void SListPopBack(SLTNode** pphead);
//ͷɾ
void SListPopFront(SLTNode** pphead);
//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//�����pos�ڵ�ǰ�����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//����pos�ڵ�ɾ��
void SListErase(SLTNode** pphead, SLTNode* pos);
