#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void  Test1()
{
	
	DLinkList* p;
	LTDataType e = 0;
	
	printf(" ��ʼ��˫����h\n");
	InitList(p);

	ListInsert(p, 1, 'a');
	ListInsert(p, 2, 'b');
	ListInsert(p, 3, 'c');
	ListInsert(p, 4, 'd');
	ListInsert(p, 5, 'e');	
	DispList(p);

	printf(" ����=%d\n", ListLength(p));
	printf(" ˫����Ϊ%s\n", (ListLength(p) ? "��" : "�ǿ�"));
	GetElem(p, 3, e);
	printf(" ������Ԫ��=%c\n", e);
	printf(" Ԫ��a��λ��=%d\n", LocateElem(p, 'a'));
	printf(" �ڵ��ĸ�Ԫ���ϲ���f\n");
	ListInsert(p, 4, 'f');
	DispList(p);

	printf(" ɾ��h�ĵ�����Ԫ��\n");
	ListDelete(p, 3, e);
	DispList(p);
	
	DestroyList(p);


}


int main()
{
	Test1();
	return 0;
}