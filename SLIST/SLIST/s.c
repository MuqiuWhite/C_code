#define _CRT_SECURE_NO_WARNINGS 1
#include "s.h"
// 初始化，创建
SL * init(ElemType x)
{
	SL* newspace = (SL*)malloc(sizeof(SL));
	newspace->data = x;
	newspace->next = NULL;
	return newspace;
}

//打印
void print(SL* head)
{
	SL* current = head;
	while (current != NULL)
	{
		printf("%c ",current->data);
		current = current->next;
	}
	printf("\n");

}


//头插
void PushFront(SL** pps, ElemType x)
{
	SL* newspace = init(x);
	newspace->next = *pps;
	*pps = newspace;
}

//尾插
void PushBack(SL** pps, ElemType x)
{

	SL*newspace=init(x);
	if (*pps == NULL)
	{
		*pps = newspace;
	}
	else
	{
		SL* end=*pps;
		while (end->next != NULL)//找尾结点
		{
			end = end->next;
		}
		end->next = newspace;
	}
}

//头删
void PopFront(SL** pps)
{
	SL* second = (*pps)->next;
	free(*pps);//第一个节点
	*pps = second;
}

//尾删
void PopBack(SL** pps)
{
	if (*pps == NULL)//空
	{
		return;
	}
	else if ((*pps)->next == NULL)//一个节点
	{
		free(*pps);
		*pps = NULL;
	}
	else//多节点
	{
		SL* pre = NULL;
		SL* end = *pps;
		while (end->next != NULL)//最后一个
		{
			pre = end;//倒数第二个
			end = end->next;//最后一个
		}
		free(end);
		pre->next = NULL;
	}
}

//任意节点插入
void insert(SL** pps, int e,ElemType x)
{
	SL* n = ser(*pps, e);
	if (n)
	{
		SL* newspace = init(x);
		if (n == *pps)
		{
			//头插
			PushFront(pps, x);
		}
		else
		{
			SL* pre = *pps;
			while (pre->next != n)//找到n的前一个节点
			{
				pre = pre->next;
			}
			pre->next = newspace;
			newspace->next = n;//链接n节点
		}
	}
	else
	{
		printf("找不到\n");
	}
}
//任意节点删除
void del(SL** pps,int e)
{

	SL* n = ser(*pps, e);
	if (n)
	{
		if (*pps == n)
		{
			//头删
			PopFront(pps);
		}
		else
		{
			SL* pre = *pps;
			while (pre->next != n)
			{
				pre = pre->next;
			}
			pre->next = n->next;//将n 节点的前一个节点连接到n的后一个节点

		}
	}
	else
		printf("找不到\n");
}

//查找
SL* ser(SL* ps, int e)
{
	SL* n = ps;
	int i = 0;
	for (i = 0; i < e; i++)
	{
		n = n->next;
		
	}
	return n;
	if (i >= e)
		return NULL;

}

//查找元素
void ser_x(SL* ps, int n)
{

	int i = 0;
	SL* head = ps;
	while (i < n && (head->next != NULL))
	{
		head = head->next;
		i++;
	}
	if (i == n)
	{
		printf("它是%c\n",head->data);
	}
	else
	{
		printf("找不到\n");
	}
}

//销毁
void destory(SL** pps)
{
	free(*pps);
	*pps = NULL;
}

// 长度
int size(SL *ps)

{

	int i = 1;

	SL* head = ps;

	while (head->next != NULL)

	{
		head = head->next;
		i++;
	}

	return i;

}
//查找位置
int ser_n(SL* ps, ElemType x)
{
	int i = 0;
	SL* head=ps;
	while (head != NULL)
	{
		if (head->data == x)
		{
			return i;
		}
		head = head->next;
		i++;
	}

	return -1;
}

//是否为空
int	IsEmpty(SL* ps)
{
	if (ps == NULL)
	{
		printf("链表为空\n");
		return 1;
	}
	printf("链表非空\n");
	return 0;
}