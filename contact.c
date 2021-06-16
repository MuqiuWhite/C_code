//函数实现 
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
	ps->data=(struct people*)malloc(default_size*sizeof(struct people));
	if(ps->data==NULL)
	return;
	ps->size=0;
	ps->capa=default_size;
}

void check(struct contact *ps)
{
	if (ps->size==ps->capa)
	{//增容 
	
	struct people* ptr=(struct people *)realloc(ps->data,(ps->capa+2)*sizeof(struct people));
	if(ptr!=NULL)
	{
		ps->data=ptr;
		ps->capa+=2;
		printf("成功\n"); 
	}
	else
		printf("失败\n");
	}
	
	//memset(ps->data,0,sizeof(ps->data));
	//ps->size=0;
}

void add(struct contact *ps)
{
	//检测数据 
	//1.没满，增加空间 2.满了，啥事不干 
	check(ps);
	
	//增加数据
		printf("名字:>\n");
		scanf("%s",ps->data[ps->size].name);
		printf("年龄:>\n");
		scanf("%d",&(ps->data[ps->size].age));
		printf("性别:>\n");
		scanf("%s",ps->data[ps->size].sex);
		printf("地址:>\n");
		scanf("%s",ps->data[ps->size].addr);
		printf("电话:>\n");
		scanf("%s",ps->data[ps->size].tele);	
		ps->size++;
		printf("好耶！成功添加！"); 
		
	/*if(ps->size==max)
		printf("已满，无法添加\n");
	else
	{
		printf("名字:>\n");
		scanf("%s",ps->data[ps->size].name);
		printf("年龄:>\n");
		scanf("%d",&(ps->data[ps->size].age));
		printf("性别:>\n");
		scanf("%s",ps->data[ps->size].sex);
		printf("地址:>\n");
		scanf("%s",ps->data[ps->size].addr);
		printf("电话:>\n");
		scanf("%s",ps->data[ps->size].tele);	
		ps->size++;
		printf("好耶！成功添加！"); 
	}*/	
		  
}

void sho(const struct contact *ps)
{
	if(ps->size==0)
		printf("通讯录为空\n");
	else
	{
		int i=0;
		printf("%-10s %-4s %-5s %-12s %-12s","名字","年龄","性别","电话","地址"); 
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
	printf("删除\n");
	scanf("%s",&name); 
	int j=0;
//	1.查找
	int pos=find(ps,name); 
	if(pos==-1)
		printf("找不到啊嘤嘤嘤\n");
	else
	{
		//	2.删除 
		int j=0;
		for(j=pos;j<ps->size-1;j++)
		{
		ps->data[j]=ps->data[j+1];	
		ps->size--; 
		}
		printf("删除成功！\n");
		
	} 	
}
void sea(struct contact* ps)
{
	char name[max_name];
	scanf("%s",name);
	int pos=find(ps,name);
	if(pos==-1)
	printf("找不到啊嘤嘤嘤\n");
	else
	{
		int i=0;
		printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s","名字","年龄","性别","电话","地址"); 
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
void mod(struct contact *ps)
{
	char name[max_name];
	scanf("%s",name);
	int pos=find(ps,name);
	if(pos==-1)
	{
		printf("找不到啊嘤嘤嘤\n");	
	}
	else
	{
		int i=0;
		printf("%-10s\t %-4s\t %-5s\t %-12s\t %-12s","名字","年龄","性别","电话","地址"); 
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
	ps->data[1].age;
	
	
}

void destory(struct contact* ps)
{
	free(ps->data);
	ps->data=NULL;
}
 

