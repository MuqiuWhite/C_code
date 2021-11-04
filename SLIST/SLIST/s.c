#define _CRT_SECURE_NO_WARNINGS 1
#include "s.h"
// ��ʼ��������
SL * init(ElemType x)
{
	SL* newspace = (SL*)malloc(sizeof(SL));
	newspace->data = x;
	newspace->next = NULL;
	return newspace;
}

//��ӡ
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


//ͷ��
void PushFront(SL** pps, ElemType x)
{
	SL* newspace = init(x);
	newspace->next = *pps;
	*pps = newspace;
}

//β��
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
		while (end->next != NULL)//��β���
		{
			end = end->next;
		}
		end->next = newspace;
	}
}

//ͷɾ
void PopFront(SL** pps)
{
	SL* second = (*pps)->next;
	free(*pps);//��һ���ڵ�
	*pps = second;
}

//βɾ
void PopBack(SL** pps)
{
	if (*pps == NULL)//��
	{
		return;
	}
	else if ((*pps)->next == NULL)//һ���ڵ�
	{
		free(*pps);
		*pps = NULL;
	}
	else//��ڵ�
	{
		SL* pre = NULL;
		SL* end = *pps;
		while (end->next != NULL)//���һ��
		{
			pre = end;//�����ڶ���
			end = end->next;//���һ��
		}
		free(end);
		pre->next = NULL;
	}
}

//����ڵ����
void insert(SL** pps, int e,ElemType x)
{
	SL* n = ser(*pps, e);
	if (n)
	{
		SL* newspace = init(x);
		if (n == *pps)
		{
			//ͷ��
			PushFront(pps, x);
		}
		else
		{
			SL* pre = *pps;
			while (pre->next != n)//�ҵ�n��ǰһ���ڵ�
			{
				pre = pre->next;
			}
			pre->next = newspace;
			newspace->next = n;//����n�ڵ�
		}
	}
	else
	{
		printf("�Ҳ���\n");
	}
}
//����ڵ�ɾ��
void del(SL** pps,int e)
{

	SL* n = ser(*pps, e);
	if (n)
	{
		if (*pps == n)
		{
			//ͷɾ
			PopFront(pps);
		}
		else
		{
			SL* pre = *pps;
			while (pre->next != n)
			{
				pre = pre->next;
			}
			pre->next = n->next;//��n �ڵ��ǰһ���ڵ����ӵ�n�ĺ�һ���ڵ�

		}
	}
	else
		printf("�Ҳ���\n");
}

//����
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

//����Ԫ��
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
		printf("����%c\n",head->data);
	}
	else
	{
		printf("�Ҳ���\n");
	}
}

//����
void destory(SL** pps)
{
	free(*pps);
	*pps = NULL;
}

// ����
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
//����λ��
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

//�Ƿ�Ϊ��
int	IsEmpty(SL* ps)
{
	if (ps == NULL)
	{
		printf("����Ϊ��\n");
		return 1;
	}
	printf("����ǿ�\n");
	return 0;
}