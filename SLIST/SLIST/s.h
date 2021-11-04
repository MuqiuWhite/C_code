#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct SL
{
	ElemType data;
	struct SL* next;
}SL;

//��ʼ��������
SL* init(ElemType x);

//��ӡ
void print(SL* head);

//ͷ��
void PushFront(SL** ps, ElemType x);
//β��
void PushBack(SL** ps, ElemType x);
//ͷɾ
void PopFront(SL** pps);
//βɾ
void PopBack(SL** pps);
//����ڵ����
void insert(SL** pps, int e, ElemType x);
//����ڵ�ɾ��
void del(SL** pps,int e);
//����
SL* ser(SL* ps, int e);
//����Ԫ��
void ser_x(SL* ps, int n);
//����
void destory(SL** pps);
// ����
int size(SL* ps);
//����λ��
int ser_n(SL* ps, ElemType x);
//�Ƿ�Ϊ��
int	IsEmpty(SL* ps);
