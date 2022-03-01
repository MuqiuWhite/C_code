#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
void PrintArray(int* a, int n);
// 归并排序递归实现
void MergeSort(int* a, int n);
void _MergeSort(int* a, int left,int right,int *tmp);
// 归并排序非递归实现
void MergeSortNonR(int* a, int n);
// 计数排序
void CountSort(int* a, int n);