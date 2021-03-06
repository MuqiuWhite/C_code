#define _CRT_SECURE_NO_WARNINGS 1
#include "S.h"

//打印
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

//开辟空间
SLTNode* CreatSListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)//(SLTNode*phead, ) pphead是phead(plist)的地址，*pphead是phead的内容
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

//头插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = CreatSListNode(x);
	newnode->next = *pphead;//先前头结点的地址放入现在新的头结点
	*pphead = newnode;//把新的第一个结点地址给phead
}

//尾删
void SListPopBack(SLTNode** pphead)
{
	//1.空链表，就别删了
	if (*pphead == NULL)
	{
		return ;
	}
	//2.只有一个结点，注意空指针
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3.一个以上结点
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

//头删
void SListPopFront(SLTNode** pphead)
{
	SLTNode* next = (*pphead)->next;//把第二个结点的地址给保存起来
	//如果直接释放，不保存下一个的地址的话：头结点里还保存着下一个节点地址，这样就会找不到第二个结点了
	free(*pphead);//释放第一个结点
	*pphead = next;//把保存好的第二个结点的地址放入定义的头指针
}

//查找
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

//任意的pos节点前面插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = CreatSListNode(x);
	if (pos == *pphead)//只有一个结点
	{
		SListPushFront(pphead, x);//就当做头插
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

//任意pos节点删除
void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (pos == *pphead)
	{
		SListPopFront(pphead);//当只有一个结点，没有前一个结点，使用头删
	}
	SLTNode* prev = *pphead;//prev是pos的前一个结点
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
}


