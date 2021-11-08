#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
typedef char STDataType;
typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

void Init(ST* ps);
void Destory(ST* ps);
//ջ����������,��ջ
void Push(ST* ps,STDataType x);
//��ջ
void Pop(ST* ps);
STDataType Top(ST* ps);
int Size(ST* ps);
bool Empty(ST* ps);


