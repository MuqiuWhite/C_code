#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
void  Test1()
{
	LTNode* phead = Init();

	//尾插
	PushBack(phead, 1);
	PushBack(phead, 2);
	Print(phead);

	PushFront(phead, 0);
	PushFront(phead, -1);
	Print(phead);

	PopFront(phead);
	Print(phead);

	PopBack(phead);
	Print(phead);

	LTNode* pos = Find(phead, 1);
	if (pos)
	{
		//查找附带修改的作用
		pos->data *= 10;
		printf("yes，修改，乘以10\n");
		Print(phead);
	}
	else
	{
		printf("NO\n");
	}

	// 在10前面
	Insert(pos, 20);
	Print(phead);

	//删除10
	Erase(pos);
	Print(phead);

	Des(phead);
	phead = NULL;


}


int main()
{
	Test1();
	return 0;
}