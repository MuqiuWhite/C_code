//����ʵ�� 
#include "contact.h"
static int find(struct contact *ps,char name[max_name])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
	if(0==strcmp(ps->data[i].name,name))
		return i;	
	}
	return -1;
}
void init (struct contact *ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size=0;
}

void add(struct contact *ps)
{
	if(ps->size==max)
		printf("�������޷����\n");
	else
	{
		printf("����:>\n");
		scanf("%s",ps->data[ps->size].name);
		printf("����:>\n");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�Ա�:>\n");
		scanf("%s",ps->data[ps->size].sex);
		printf("��ַ:>\n");
		scanf("%s",ps->data[ps->size].addr);
		printf("�绰:>\n");
		scanf("%s",ps->data[ps->size].tele);	
		ps->size++;
		printf("��Ү���ɹ���ӣ�"); 
	}	
		  
}

void sho(const struct contact *ps)
{
	if(ps->size==0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		int i=0;
		printf("%-10s %-4s %-5s %-12s %-12s","����","����","�Ա�","�绰","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s %-4s %-5s %-12s %-12s\n",
					ps->data[i].name,
					ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tele,
					ps->data[i].addr);	
		}	
	} 
}
void del(struct contact *ps)
{
	char name[max_name];
	printf("ɾ��\n");
	scanf("%s",name); 
	int i=0;
//	1.����
	int pos=find(ps,name); 
	if(pos==-1)
		printf("�Ҳ�����������\n");
	else
	{
		//	2.ɾ�� 
		int j=0;
		for(j=pos;j<ps->size-1;j++)
		ps->data[j]=ps->data[j+1];	
		ps->size--; 
		printf("ɾ���ɹ���");
	} 	
}
void sea(struct contact* ps)
{
	char name[max_name];
	scanf("%s",name);
	int pos=find(ps,name);
	if(pos==-1)
	printf("�Ҳ�����������\n");
	else
	{
		int i=0;
		printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s","����","����","�Ա�","�绰","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s\n",
					ps->data[pos].name,
					ps->data[pos].age,
					ps->data[pos].sex,
					ps->data[pos].tele,
					ps->data[pos].addr);	
		}
	}
}
void mod(struct contact*ps)
{
	char name[max_name];
	scanf("%s",name);
	int pos=find(ps,name);
	if(pos==-1)
	{
		printf("�Ҳ�����������\n");	
	}
	else
	{
		int i=0;
		printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s","����","����","�Ա�","�绰","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s\n",
					ps->data[pos].name,
					ps->data[pos].age,
					ps->data[pos].sex,
					ps->data[pos].tele,
					ps->data[pos].addr);	
		}
	}
}

void sor(struct contact* ps)
{
	ps->data[1].age
	
}
 

