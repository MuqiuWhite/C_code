#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int* a, int n);
// ��������
void InsertSort(int* a, int n);
// ϣ������
void ShellSort(int* a, int n);
// ѡ������
void SelectSort(int* a, int n);
//������
void HeapSort(int* a, int n);
//ð��
void BubbleSort(int* a, int n);
//����
void quickSort(int* a, int left, int right);
//���ŷǵݹ�
void QuickSortNonR(int* a, int left, int right);
//�鲢
void MergeSort(int* a, int n);
void _MergeSort(int* a, int left, int right, int* tmp);
//�鲢�ǵݹ�
void MergeSortNotR(int* a, int n);
//��������
void CountSort(int* a, int n)


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