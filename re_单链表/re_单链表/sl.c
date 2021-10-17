#define _CRT_SECURE_NO_WARNINGS 1
#include "sl.h"

////初始化空间
//SLT* init_creat(ElemType x)
//{
//	SLT* newspace = (SLT*)malloc(sizeof(SLT));
//	newspace->data = x;
//	newspace->next = NULL;
//	return newspace;
//
//}
////打印
//void print(SLT* phead)
//{
//	SLT* current = phead;
//	while (current != NULL)
//	{
//		printf("%c ", current->data);
//		current = current->next;
//	}
//	printf("\n");
//}
////头插
//void PushFront(SLT** pps, ElemType x)
//{
//	SLT* newspace = init_creat(x);
//
//}