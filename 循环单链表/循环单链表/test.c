#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
int main()
{

        LinkList sq;
        LinkList* s = &sq;
        LinkList* p = s;
        int i=0, t=0, n=0, site=0;
        char value;
        t = InitList(s);
        if (t == TRUE)
            printf("初始化完成\n");
        else
            printf("初始化还没有完成\n");

        t = ListEmpty(s);
        if (t == TRUE)
            printf("此时线性表为空\n");
        else
            printf("此时线性表不为空\n");

 
        CreateListLast(s, 'a');
        CreateListLast(s, 'b');
        CreateListLast(s, 'c');
        CreateListLast(s, 'd');
        CreateListLast(s, 'e');

        ShowList(s);

        printf("长度为%d\n", ListLength(s));

        printf("\n删除元素");

        t = ListDelete(s, 3, & value);
        if (t == FALSE)
            printf("你删除的数不在范围子内");
        else
        {
            printf("你删除的第%d个元素的值为：%d\n", site, value);
            printf("删除数据后的线性表中的数据为：");
        }


        t = LocateELem(s, 'a');
        if (t == FALSE)
            printf("抱歉，未找到查询结果");
        else
            printf("位置为：%d", t);

        int a = 3;
        t = GetElem(s, 3, &value);
            printf("第%d个元素为：%d\n", site, value);

	return 0;
}




