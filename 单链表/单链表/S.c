#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

//打印
void SlistPrint(SLTNode* phead)
{
	SLTNode* current = phead;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
}

//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)//(SLTNode*phead, ) pphead是phead的地址，*pphead是phead的内容
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)//phead==NULL
	{
		*pphead = newnode;
	}
	else
	{//找尾节点的指针
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//尾结点，链接新节点
		tail->next = newnode;
	}
}


