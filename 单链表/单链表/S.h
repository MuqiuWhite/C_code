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

//β��
void SListPushBack(SLTNode**pphead, SLTDataType x);
