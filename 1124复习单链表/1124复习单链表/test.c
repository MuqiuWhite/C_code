#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"
int main()
{
	SL* phead = NULL;
	PushFront(&phead, 1);
	Print(phead);
	return 0;
}