#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#ifndef _S_H_
#define _S_H_
#define MAX 10
typedef int ST;

typedef struct S
{
	ST* a;
	int capacity;
	int size;

}SL;

//初始化
void Sinit(SL* ps);
//打印
void SLPrintf(SL* ps);
//尾插
void SLPushBack(SL* ps, ST x);
//头插
void SLPushFront(SL* ps, ST x);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);
//任意位置插入
void SLInsert(SL* ps, int pos, ST x);
//任意位置删除
void SLErase(SL* ps, int pos);
//销毁
void SLDestory(SL* ps);
//查找
int SLFind(SL* ps,ST x);
//修改
void SLModify(SL* ps,int pos,  ST x);


#endif