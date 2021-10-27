#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void  Test1()
{
	
	DLinkList* p;
	LTDataType e = 0;
	
	printf(" 初始化双链表h\n");
	InitList(p);

	ListInsert(p, 1, 'a');
	ListInsert(p, 2, 'b');
	ListInsert(p, 3, 'c');
	ListInsert(p, 4, 'd');
	ListInsert(p, 5, 'e');	
	DispList(p);

	printf(" 长度=%d\n", ListLength(p));
	printf(" 双链表为%s\n", (ListLength(p) ? "空" : "非空"));
	GetElem(p, 3, e);
	printf(" 第三个元素=%c\n", e);
	printf(" 元素a的位置=%d\n", LocateElem(p, 'a'));
	printf(" 在第四个元素上插入f\n");
	ListInsert(p, 4, 'f');
	DispList(p);

	printf(" 删除h的第三个元素\n");
	ListDelete(p, 3, e);
	DispList(p);
	
	DestroyList(p);


}


int main()
{
	Test1();
	return 0;
}