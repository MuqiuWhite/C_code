#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
typedef int STDataType;
typedef struct strack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void Init(ST* ps);
void Destory(ST* ps);
//栈顶放入数据,入栈
void Push(ST* ps, STDataType x);
//出栈
void Pop(ST* ps);
STDataType Top(ST* ps);
int Size(ST* ps);
bool Empty(ST* ps);