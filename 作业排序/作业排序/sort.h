#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// ��������
void InsertSort(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);
// ѡ������
void SelectSort(int* a, int n);


// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);

// ð������
void BubbleSort(int* a, int n);

// ��������ݹ�ʵ��
// ��������hoare�汾
int PartSort1(int* a, int left, int right);
// ���������ڿӷ�
int PartSort2(int* a, int left, int right);
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);

typedef int STDataType;
typedef struct st
{
	int top;
	int capa;
	STDataType* data;
}st;
void init(st* t);
void push(st* t, STDataType x);//ջ����
void pop(st* t);//ջ��ɾ
STDataType top(st* t);
void des(st* t);
int size(st* t);
bool empty(st* t);