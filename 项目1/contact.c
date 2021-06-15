//函数 
#include "contact.h"

void menu ()
{
	printf("******************************\n");
	printf("***0.退出*********1.增加******\n");
	printf("***2.删除*********3.查找******\n");
	printf("***4.修改*********5.排序******\n");
	printf("***6.显示*********************\n");
	printf("******************************\n");	
}


void Initialize_con(num_con *ps)//初始化 
{
	ps->data=(people *)malloc(first_size*sizeof(people));//动态初始化空间 
	if(ps->data==NULL)
		return;
	ps->size=0;
	ps->capa=first_size; 
}


void check(num_con *ps)//检查是否需要扩容 
{
	if(ps->size==ps->capa)
	{
		//增容
		//临时指针存放增加容量后的空间 
		people * newcapa=(people *)realloc(ps->data,(ps->capa+1)*sizeof(people)) 
		if(newcapa!=NULL)//扩容成功 
		{	
			ps->data==newcapa; 
			ps->capa+=1;//容量扩大 
			printf("扩容成功啦\n"); 
		} 
		else
			printf("哎哟扩容失败了\n"); 
	}
}


//查找名字
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
	check(ps);//检查当前通讯录容量
	 
	//增加一个人的数据 
		printf("名字:>\n");
		scanf("%s",ps->data[ps->size].name);//data数组下标==size 
		printf("电话:>\n");
		scanf("%s",&(ps->data[ps->size].tele));
		printf("类别:>\n");
		scanf("%s",ps->data[ps->size].category);
		printf("地址:>\n");
		scanf("%s",ps->data[ps->size].email);

		ps->size++;
		printf("好耶！成功添加！"); 

}


//删除 
void dele(num_cpn *ps)
{
	printf("删掉谁好呢？\n");
	char name[na];
	scanf("%s",&name);
	
	//寻找名字 
	int result=find(ps,name)
	if(result==-1)
	{
		printf("找不到啊呜呜呜\n"); 		
	} 
	else
	{
		int j=0;
		for(j=result;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];	
			ps->size--; 
		}
		printf("删除成功！\n");
	}
} 


//显示 
void show(const num_con *ps)
{
	int i=0;
	if(ps->size==0)
		printf("通讯录为空\n");
	printf("%-10s\t%-10s\t%-10s\t%-10s\n","名字","电话","类别","地址"); 
	for(i=0;i<ps->size;i++)
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n)",
		ps->data[i].name,
		ps->data[i].tele,
		ps->data[i].cotegory,
		ps->data[i].email,);	
	}	
}


 
