#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

//��ӡ
void SlistPrint(SLTNode* phead)
{
	SLTNode* current = phead;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
}

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)//(SLTNode*phead, ) pphead��phead�ĵ�ַ��*pphead��phead������
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL)//phead==NULL
	{
		*pphead = newnode;
	}
	else
	{//��β�ڵ��ָ��
		SLTNode* tail = *pphead;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//β��㣬�����½ڵ�
		tail->next = newnode;
	}
}


