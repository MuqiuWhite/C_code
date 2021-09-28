#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//÷∏’Î
}SLTNode;

//¥Ú”°
void SlistPrint(SLTNode* phead);

//Œ≤≤Â
void SListPushBack(SLTNode**pphead, SLTDataType x);
