#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
} ListNode;

//��ʼ��
ListNode* ListInit();
//���
void ListDestory(ListNode* phead);
//β��
void ListPushBack(ListNode* phead, LTDataType x);
//ͷ��
void ListPushFront(ListNode* phead, LTDataType x);
//βɾ
void ListPopBack(ListNode* phead);
//ͷɾ
void ListPopFront(ListNode* phead);
//����
ListNode* ListFind(ListNode* phead, LTDataType x);
//����ڵ�ǰ����
void ListInsert(ListNode* pos, LTDataType x);
//����ڵ�ɾ��
void ListErase(ListNode* pos);
//��ӡ
void ListPrint(ListNode* phead);
//�жϿ�
bool ListEmpy(ListNode* phead);//#include <stdbool.h>
//��С
int size(ListNode* phead);
