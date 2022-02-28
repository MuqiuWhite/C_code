#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int* a, int n);
// ≤Â»Î≈≈–Ú
void InsertSort(int* a, int n);
// œ£∂˚≈≈–Ú
void ShellSort(int* a, int n);
// —°‘Ò≈≈–Ú
void SelectSort(int* a, int n);
//∂—≈≈–Ú
void HeapSort(int* a, int n);
//√∞≈›
void BubbleSort(int* a, int n);
//øÏ≈≈
void quickSort(int* a, int left, int right);
//øÏ≈≈∑«µ›πÈ
void QuickSortNonR(int* a, int left, int right);
//πÈ≤¢
void MergeSort(int* a, int n);
void _MergeSort(int* a, int left, int right, int* tmp);
//πÈ≤¢∑«µ›πÈ
void MergeSortNotR(int* a, int n);
//º∆ ˝≈≈–Ú
void CountSort(int* a, int n)


typedef int STDataType;
typedef struct st
{
	int top;
	int capa;
	STDataType* data;
}st;
void init(st* t);
void push(st* t, STDataType x);//’ª∂•≤Â
void pop(st* t);//’ª∂•…æ
STDataType top(st* t);
void des(st* t);
int size(st* t);
bool empty(st* t);