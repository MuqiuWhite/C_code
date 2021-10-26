#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef char SElemType;
#define AGAIN_INIT_SIZE 100
#define AGAININCREAMENT 20
typedef struct LNode
{
    SElemType data;
    struct LNode* next;
}LinkList;


Status InitList(LinkList* L);//��ʼ������ 
int ListEmpty(LinkList* L);//�ж������Ƿ�Ϊ��
void CreateList(LinkList* L, SElemType e);//ͷ�巨������ѭ������
void CreateListLast(LinkList* L, SElemType e);//β�巨����Ԫ��
int ListLength(LinkList* L);// ��ȡ������
Status ListDelete(LinkList* L, int i, SElemType* e);//ɾ�����Ա��е�iλ�õ�Ԫ��
Status LocateELem(LinkList* L, SElemType e);//����ֵΪe������Ԫ��
int GetElem(LinkList* L, int i, SElemType* e);//��ȡ���Ա��iλ�õ�Ԫ��
void ShowList(LinkList* plist);