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
            printf("��ʼ�����\n");
        else
            printf("��ʼ����û�����\n");

        t = ListEmpty(s);
        if (t == TRUE)
            printf("��ʱ���Ա�Ϊ��\n");
        else
            printf("��ʱ���Ա�Ϊ��\n");

 
        CreateListLast(s, 'a');
        CreateListLast(s, 'b');
        CreateListLast(s, 'c');
        CreateListLast(s, 'd');
        CreateListLast(s, 'e');

        ShowList(s);

        printf("����Ϊ%d\n", ListLength(s));

        printf("\nɾ��Ԫ��");

        t = ListDelete(s, 3, & value);
        if (t == FALSE)
            printf("��ɾ���������ڷ�Χ����");
        else
        {
            printf("��ɾ���ĵ�%d��Ԫ�ص�ֵΪ��%d\n", site, value);
            printf("ɾ�����ݺ�����Ա��е�����Ϊ��");
        }


        t = LocateELem(s, 'a');
        if (t == FALSE)
            printf("��Ǹ��δ�ҵ���ѯ���");
        else
            printf("λ��Ϊ��%d", t);

        int a = 3;
        t = GetElem(s, 3, &value);
            printf("��%d��Ԫ��Ϊ��%d\n", site, value);

	return 0;
}




