//���� 
#include "contact.h"

void menu ()
{
	printf("******************************\n");
	printf("***0.�˳�*********1.����******\n");
	printf("***2.ɾ��*********3.����******\n");
	printf("***4.�޸�*********5.����******\n");
	printf("***6.��ʾ*********************\n");
	printf("******************************\n");	
}


void Initialize_con(num_con *ps)//��ʼ�� 
{
	ps->data=(people *)malloc(first_size*sizeof(people));//��̬��ʼ���ռ� 
	if(ps->data==NULL)
		return;
	ps->size=0;
	ps->capa=first_size; 
}


void check(num_con *ps)//����Ƿ���Ҫ���� 
{
	if(ps->size==ps->capa)
	{
		//����
		//��ʱָ��������������Ŀռ� 
		people * newcapa=(people *)realloc(ps->data,(ps->capa+1)*sizeof(people)) 
		if(newcapa!=NULL)//���ݳɹ� 
		{	
			ps->data==newcapa; 
			ps->capa+=1;//�������� 
			printf("���ݳɹ���\n"); 
		} 
		else
			printf("��Ӵ����ʧ����\n"); 
	}
}


//��������
int find(num_con *ps,char name[na])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
		if(strcmp(name,ps->data[ps->size].name)==0)
			return i;
		else
			return -1;
	}
} 
void add(num_con *ps)
{
	check(ps);//��鵱ǰͨѶ¼����
	 
	//����һ���˵����� 
		printf("����:>\n");
		scanf("%s",ps->data[ps->size].name);//data�����±�==size 
		printf("�绰:>\n");
		scanf("%s",&(ps->data[ps->size].tele));
		printf("���:>\n");
		scanf("%s",ps->data[ps->size].category);
		printf("��ַ:>\n");
		scanf("%s",ps->data[ps->size].email);

		ps->size++;
		printf("��Ү���ɹ���ӣ�"); 

}


//ɾ�� 
void dele(num_cpn *ps)
{
	printf("ɾ��˭���أ�\n");
	char name[na];
	scanf("%s",&name);
	
	//Ѱ������ 
	int result=find(ps,name)
	if(result==-1)
	{
		printf("�Ҳ�����������\n"); 		
	} 
	else
	{
		int j=0;
		for(j=result;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];	
			ps->size--; 
		}
		printf("ɾ���ɹ���\n");
	}
} 


//��ʾ 
void show(const num_con *ps)
{
	int i=0;
	if(ps->size==0)
		printf("ͨѶ¼Ϊ��\n");
	printf("%-10s\t%-10s\t%-10s\t%-10s\n","����","�绰","���","��ַ"); 
	for(i=0;i<ps->size;i++)
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n)",
		ps->data[i].name,
		ps->data[i].tele,
		ps->data[i].cotegory,
		ps->data[i].email,);	
	}	
}


 
