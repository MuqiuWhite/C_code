#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;
}

void ListPrint(ListNode *phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d  ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	/*ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;*/

	ListInsert(phead, x);
}

//ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	//assert(phead);


	//ListNode* first = phead->next;//ԭ�ȵĵ�һ��
	//ListNode* newnode = BuyListNode(x);

	//newnode->prev = phead;
	//newnode->next = first;
	//phead->next = newnode;
	//first->prev = newnode;

	//û����first
	/*newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;*/

	ListInsert(phead->next,x);
}
//βɾ
void ListPopBack(ListNode* phead)
{
	assert(phead);
	//ListNode* tail = phead->prev;
	//ListNode* prev = tail->prev;//�����ڶ���
	//prev->next = phead;
	//phead->prev = prev;

	//free(tail);
	//tail = NULL;

	ListErase(phead->prev);
}
//ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	/*assert(phead->next != phead);

	ListNode* first = phead->next;
	ListNode* second = first->next;

	phead->next = second;
	second->prev = phead;

	free(first);
	first = NULL;*/


	ListErase(phead->next);
}

//����
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;

}
//������֪������ֵ�Ľڵ�ǰ����
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

//����ڵ�ɾ��
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next=next;
	next->prev = prev;
	free(pos);
}
//���
void ListDestory(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;//������һ������Ȼ���Ҳ�����
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}
