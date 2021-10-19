#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SList
{
	SLDataType* arr;
	SLDataType size;
	SLDataType capacity;
}SL;

void Init(SL*ps);
//��ӡ
void Print(SL* ps);
//ͷ��
void PushFront(SL* ps, SLDataType x);
//β��
void PushBack(SL* ps, SLDataType x);
//ͷɾ
void PopFront(SL* ps);
//βɾ
void PopBack(SL* ps);
//����λ�ò���
void Insert(SL* ps, int n, SLDataType x);
//����λ��ɾ��
void Erase(SL* ps, int n);
