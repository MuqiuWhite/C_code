#define _CRT_SECURE_NO_WARNINGS 1

#pragma once//��
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int ST; //������������
#define N 10;

typedef struct SL
{
	ST* a;//����ָ��
	int sz;//��Ч���ݴ�С
	int capacity;//����
}SL,SS;

void init(SL* ps);
void sp(SL* ps);
//β��βɾ ͷ��ͷɾ

void spushback(SL* ps, ST x);
void spopback(SL* ps);
void spushfront(SL* ps, ST x);
void spopfront(SL* ps);

void sinsert(SL* ps, int pos, ST x);//����λ�ò���
void serase(SL* ps, int pos);//����λ��ɾ��