#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void init_con(struct Contact* ps)
{
	ps->sz = 0;
	memset(ps->data, 0, MAX * sizeof(struct People));
	memset(ps->data, 0, sizeof(ps->data));
}

void add_con(struct Contact* ps)
{
	People tmp = { 0 };
	if (ps->sz == MAX)
	{
		printf("");

	}
	else
	{
		printf("���֣�");
		scanf("%s",tmp.name);
		printf("\n���䣺");
		scanf("%d",&tmp.age);
		printf("\n�Ա�");
		scanf("%s", tmp.sex);
		printf("\n�绰��");
		scanf("%s", tmp.tele);
		printf("\n��ַ��");
		scanf("%s", tmp.addr);

		ps->data[ps->sz] = tmp;
		printf("�ɹ�\n");
		ps->sz++;
	}

}

void show_con(struct Contact* ps)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < ps->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			ps->data[i].name, 
			ps->data[i].age,
			ps->data[i].sex, 
			ps->data[i].tele, 
			ps->data[i].addr);
	}
}