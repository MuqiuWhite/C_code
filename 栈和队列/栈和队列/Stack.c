#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void Init(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("realloc fall\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->top = 0;
}
bool Empty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
void Destory(ST* ps)
{
	assert(ps);
	ps->capacity = 0;
	ps->top = 0;
	free(ps->a);
	ps->a = NULL;
}

//ջ����������,��ջ
void Push(ST* ps, STDataType x)
{
	//�ж�����
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fall\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}

//��ջ
void Pop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);//���ջ���ˣ�����ֹ
	ps->top--;
}
STDataType Top(ST* ps)
{
	assert(ps);
	assert(!Empty(ps));//���ջ���ˣ�����ֹ
	return ps->a[ps->top - 1];

}
int Size(ST* ps)
{
	assert(ps);
	return ps->top;
}
