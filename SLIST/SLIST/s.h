#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct SL
{
	ElemType data;
	struct SL* next;
}SL;

//初始化，创建
SL* init(ElemType x);

//打印
void print(SL* head);

//头插
void PushFront(SL** ps, ElemType x);
//尾插
void PushBack(SL** ps, ElemType x);
//头删
void PopFront(SL** pps);
//尾删
void PopBack(SL** pps);
//任意节点插入
void insert(SL** pps, int e, ElemType x);
//任意节点删除
void del(SL** pps,int e);
//查找
SL* ser(SL* ps, int e);
//查找元素
void ser_x(SL* ps, int n);
//销毁
void destory(SL** pps);
// 长度
int size(SL* ps);
//查找位置
int ser_n(SL* ps, ElemType x);
//是否为空
int	IsEmpty(SL* ps);
