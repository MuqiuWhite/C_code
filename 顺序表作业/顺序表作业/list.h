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

//��ʼ��
void init_list(SList* ps);
//��ӡ
void print_list(SList* ps);
//ͷ��
void PushFront(SList* ps, ElemType x);
//β��
void PushBack(SList* ps, ElemType x);
//ͷɾ
void PopFront(SList* ps);
//βɾ
void PopBack(SList* ps);
//����ڵ�ǰ����
void insert(SList* ps, int n, ElemType x);
//����ڵ�ɾ��
void del(SList* ps, int n);
//����Ԫ��λ��
int ser(SList* ps, ElemType x);
//����ĳλ��Ԫ��
void ser_pos(SList* ps, int n);
//����
void destory(SList* ps);
//�޸�
void mod(SList* ps, int n, ElemType x);
