#define _CRT_SECURE_NO_WARNINGS 1

//int a[5] = { 0,5,2,4,3 };
//int s = sizeof(a) / sizeof(a[0]);
//int i = 0;
//for (i = 0; i < s - 1; i++)
//{
//	int j = 0;
//	for (j = 0; j < s-1-i; j++)
//	{
//
//	}
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	struct Stu
	{
		char name[20];
		int age;
	};
		
	int cmp_by_name(const void*e1, const void*e2)
	{
		return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	}
		
	int cmp_by_age(const void* e1, const void* e2)
	{
		return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;
	}
		
	void test2()
	{
		struct Stu s[3] = { {"zhangsan", 15}, {"lisi", 30},{"wangwu", 10} };

		int sz = sizeof(s) / sizeof(s[0]);

		//按照名字排序
		//qsort(s, sz, sizeof(s[0]), cmp_by_name);

		//按照年龄来排序
		qsort(s, sz, sizeof(s[0]), cmp_by_age);
	}
int main()
{
	test2();

	return 0;
}
