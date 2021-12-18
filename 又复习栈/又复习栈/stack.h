#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef int STDataType;
typedef struct st
{
	int top;
	int capa;
	STDataType* data;
}st;
void init(st* t);
void push(st* t,STDataType x);//Õ»¶¥²å
void pop(st* t);//Õ»¶¥É¾
STDataType top(st* t);
void des(st* t);
int size(st* t);
bool empty(st* t);