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

//尾插
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

//头插
void ListPushFront(ListNode* phead, LTDataType x)
{
	//assert(phead);


	//ListNode* first = phead->next;//原先的第一个
	//ListNode* newnode = BuyListNode(x);

	//newnode->prev = phead;
	//newnode->next = first;
	//phead->next = newnode;
	//first->prev = newnode;

	//没定义first
	/*newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;*/

	ListInsert(phead->next,x);
}
//尾删
void ListPopBack(ListNode* phead)
{
	assert(phead);
	//ListNode* tail = phead->prev;
	//ListNode* prev = tail->prev;//倒数第二个
	//prev->next = phead;
	//phead->prev = prev;

	//free(tail);
	//tail = NULL;

	ListErase(phead->prev);
}
//头删
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

//查找
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
//任意已知具体数值的节点前插入
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

//任意节点删除
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next=next;
	next->prev = prev;
	free(pos);
}
//清空
void ListDestory(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;//保存下一个，不然就找不见了
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}
