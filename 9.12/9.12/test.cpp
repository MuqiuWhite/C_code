#define _CRT_SECURE_NO_WARNINGS 1

#include "SL.h"
//����ͷβ�Ĳ���ɾ��
void test1()
{
	SL s;
	init(&s);
	spushback(&s, 1);
	spushback(&s, 2);
	spushback(&s, 3);
	sp(&s);
}
int main()
{
	test1();
	return 0;
}