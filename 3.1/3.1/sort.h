#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
void PrintArray(int* a, int n);
// �鲢����ݹ�ʵ��
void MergeSort(int* a, int n);
void _MergeSort(int* a, int left,int right,int *tmp);
// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n);
// ��������
void CountSort(int* a, int n);