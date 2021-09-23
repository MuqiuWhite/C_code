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

//��ʼ��
void Sinit(SL* ps);
//��ӡ
void SLPrintf(SL* ps);
//β��
void SLPushBack(SL* ps, ST x);
//ͷ��
void SLPushFront(SL* ps, ST x);
//βɾ
void SLPopBack(SL* ps);
//ͷɾ
void SLPopFront(SL* ps);
//����λ�ò���
void SLInsert(SL* ps, int pos, ST x);
//����λ��ɾ��
void SLErase(SL* ps, int pos);
//����
void SLDestory(SL* ps);
//����
int SLFind(SL* ps,ST x);
//�޸�
void SLModify(SL* ps,int pos,  ST x);


#endif