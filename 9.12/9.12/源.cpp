#define _CRT_SECURE_NO_WARNINGS 1

//#pragma once//��
//typedef int ST; //������������
//#define N 10;
//
//struct Sl
//{
//	ST* a;//����ָ��
//	int sz;//��Ч���ݴ�С
//	int capacity;//����
//};
////β��βɾ ͷ��ͷɾ
//void spushback(struct SL*ps,ST x);
//void spopback(struct SL* ps);
//void spushfront(struct SL* ps, ST x);
//void spopfront(struct SL* ps);
//void sinsert(struct SL* ps, int pos, ST x);//����λ�ò���
//void serase(struct SL* ps, int pos);//����λ��ɾ��



#include "SL.h"

void init(SL* ps)
{
	//s.sz = 0;
	//s.a = NULL;
	//s.capacity = 0;

	ps->a = (ST*)malloc(sizeof(ST) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}

	ps->sz = 0;
	ps->capacity = 4;//4���ռ䣬�����ֽ�
}

void Sinit(SL s);

//β��βɾ ͷ��ͷɾ

void spushback(SL* ps, ST x)
{
	assert(ps);
	ps->a[ps->sz] = x; 
	ps->sz++;
}

void sp(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d", ps->a[i]);
	}
	printf("\n");

}
void spopback(SL* ps);
void spushfront(SL* ps, ST x);
void spopfront(SL* ps);
void sinsert(SL* ps, int pos, ST x);//����λ�ò���
void serase(SL* ps, int pos);//����λ��ɾ��