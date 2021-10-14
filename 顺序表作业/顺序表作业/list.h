#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
typedef char ElemType;
typedef struct SList
{
	ElemType* data;
	int size;
	int capacity;
}SList;

//初始化
void init_list(SList* ps);
//打印
void print_list(SList* ps);
//头插
void PushFront(SList* ps, ElemType x);
//尾插
void PushBack(SList* ps, ElemType x);
//头删
void PopFront(SList* ps);
//尾删
void PopBack(SList* ps);
//任意节点前插入
void insert(SList* ps, int n, ElemType x);
//任意节点删除
void del(SList* ps, int n);
//查找元素位置
int ser(SList* ps, ElemType x);
//查找某位置元素
void ser_pos(SList* ps, int n);
//销毁
void destory(SList* ps);
//修改
void mod(SList* ps, int n, ElemType x);
