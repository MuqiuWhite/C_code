#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

//��ӡ
void SlistPrint(SLTNode* phead)
{
	SLTNode* current = phead;
	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n\n");
}

//���ٿռ�
SLTNode* CreatSListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)//(SLTNode*phead, ) pphead��phead(plist)�ĵ�ַ��*pphead��phead������
{
	/*SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;*/
	SLTNode* newnode=CreatSListNode(x);

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

//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = CreatSListNode(x);
	newnode->next = *pphead;//��ǰͷ���ĵ�ַ���������µ�ͷ���
	*pphead = newnode;//���µĵ�һ������ַ��phead
}

//βɾ
void SListPopBack(SLTNode** pphead)
{
	//1.�������ͱ�ɾ��
	if (*pphead == NULL)
	{
		return ;
	}
	//2.ֻ��һ����㣬ע���ָ��
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.һ�����Ͻ��
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

//ͷɾ
void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;//�ѵڶ������ĵ�ַ����������
	//���ֱ���ͷţ���������һ���ĵ�ַ�Ļ���ͷ����ﻹ��������һ���ڵ��ַ�������ͻ��Ҳ����ڶ��������
	free(*pphead);//�ͷŵ�һ�����
	*pphead = next;//�ѱ���õĵڶ������ĵ�ַ���붨���ͷָ��
}

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* current = phead;
	while (current != NULL)
	{
		if (current->data == x)
		{
			return current;
		}
		current = current->next;
	}

	return NULL;
}

//�����pos�ڵ�ǰ�����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = CreatSListNode(x);
	if (pos == *pphead)//ֻ��һ�����
	{
		SListPushFront(pphead, x);//�͵���ͷ��
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}

//����pos�ڵ�ɾ��
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos == *pphead)
	{
		SListPopFront(pphead);//��ֻ��һ����㣬û��ǰһ����㣬ʹ��ͷɾ
	}
	SLTNode* prev = *pphead;//prev��pos��ǰһ�����
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
}


