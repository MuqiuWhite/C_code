//函数 
#include "contact.h"

void menu ()
{
	printf("———————————————\n");
	printf("************通讯录************\n");
	printf("***0.退出************1.增加***\n");
	printf("***2.删除************3.查找***\n");
	printf("***4.修改************5.排序***\n");
	printf("***6.显示************7.清空***\n");
	printf("**********8.保存文件**********\n");
	printf("******************************\n");	
}


void Initialize_con(num_con *ps)//初始化 
{
	ps->data=(people *)malloc(first_size*sizeof(people));//动态初始化空间 
	if(ps->data==NULL)
		return;
	ps->size=0;
	ps->capa=first_size; 
	
	//把文件中已经存放的信息加载入通讯录
	load(ps); 

}
 

void check(num_con *ps)//检查是否需要扩容 
{
	if(ps->size==ps->capa)
	{
		//增容
		//临时指针存放增加容量后的空间 
		people * newcapa=(people *)realloc(ps->data,(ps->capa+1)*sizeof(people)); 
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


//选择查找类型 
int find_kind()
{
	int i=0;
	while(1)
	{
		printf("请选择查找类型\n1.按名字\t2.按类型\n");
		scanf("%d",&i);
		if(i==1||i==2)
		{
			return i;
		
		}
		else
		{
			printf("输入有误，请重新输入\n"); 
		}
	}
	
} 


//查找名字
int find(num_con *ps,char name[na])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
		
		if(strcmp(name,ps->data[i].name)==0)
			return i;
		
	//	else
	//		return -1;
	}
	return -1;
} 

//添加 
void add(num_con *ps)
{
	check(ps);//检查当前通讯录容量
	char a[cate];
	int b=1;
	//增加一个人的数据 
		printf("名字:>\n");
		scanf("%s",ps->data[ps->size].name);//data数组下标==size 
		printf("电话:>\n");
		scanf("%s",ps->data[ps->size].tele);
		
		do 
		{
		printf("类别:请准确输入朋友、同事、商务、一般:>\n");
		scanf("%s",a);
		getchar();//接受回车 
		if(strcmp(a,"朋友")==0||
		   strcmp(a,"同事")==0||
		   strcmp(a,"商务")==0||
		   strcmp(a,"一般")==0)
		{ 
			b=0;
			strcpy(ps->data[ps->size].category,a);
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
		
		}while(b);
		
		printf("地址:>\n");
		scanf("%s",ps->data[ps->size].email);

		ps->size++;
		printf("好耶！成功添加！\n"); 

}


//删除 
void dele(num_con *ps)
{
	printf("删掉谁好呢？\n");
	char a[na];
	scanf("%s",a);
	
	//寻找名字 
	int result=find(ps,a);
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
			 
		}
		ps->size--;
		printf("删除成功！\n");
	}
} 

//按类别查找 
void findkind(num_con *ps)
{
	int i=0,t=0;
	char a[cate]; 
	printf("按类别查找:\n请输入:>朋友、同事、商务、一般:>\n");
	scanf("%s",a);
//	getchar();//接受回车 
	printf("正在查找中...\n");
	printf("————————————————————\n"); 
	for(i=0;i<ps->size;i++)
	{
//		if(ps->data[i].tele!='\0')
//		{
			if(strcmp(ps->data[i].category,a)==0)
			{
				t=1;
				printf("%-10s\t%-10s\t%-10s\t%-10s\n","名字","电话","类别","地址"); 
		
			printf("%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[i].name,
			ps->data[i].tele,
			ps->data[i].category,
			ps->data[i].email);	
			}
	}
	if(t==0)
	{
		printf("找不到啊呜呜呜\n"); 
	
	}

	
}


//按名字查找
void findname(num_con *ps)
{
	int i=0;
	if(0==ps->size)
	{
		printf("通讯录为空，无法查找\n");
		return;
	}
	char a[na]; 
	printf("按名字查找:\n请输入:>\n"); 
	scanf("%s",a);
	getchar();//接受回车 
	printf("正在查找中...\n");
	printf("————————————————————\n");
	int result=find(ps,a);
	if(result==-1)
	{
		printf("找不到啊呜呜呜\n"); 		
	} 
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n","名字","电话","类别","地址"); 
		printf("%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[result].name,
			ps->data[result].tele,
			ps->data[result].category,
			ps->data[result].email);
	}	
}


//修改 
void modify(num_con *ps)
{
	int i=0;
	if(0==ps->size)
	{
		printf("通讯录为空，无法修改\n");
		return;
	}
	
	char a[na];
	printf("请输入要修改的人的名字\n");
	scanf("%s",a);
	
	//寻找名字 
	int result=find(ps,a);
	if(result==-1)
	{
		printf("找不到啊呜呜呜\n"); 		
	} 
	else
	{
		printf("已找到\n请输入修改的内容:>\n");
		printf("名字修改为:>\n");
		scanf("%s",ps->data[result].name);
		printf("电话修改为:>\n");
		scanf("%s",ps->data[result].tele);
		printf("类别修改为:>\n");
		scanf("%s",ps->data[result].category);
		printf("邮箱修改为:>\n"); 
		scanf("%s",ps->data[result].email); 
		printf("修改成功啦！\n");
	}
	
	
}


//排序
void sort(num_con *ps)
{
	int i=0,j=0;
	people peo;
	printf("正在按名字排序中:>\n");
	for(i=0;i<ps->size;i++)
	{
		for(j=i+1;j<ps->size;j++)
		if(strcmp(ps->data[i].name,ps->data[j].name)>=0)
		{
			peo=ps->data[i];
			ps->data[i]=ps->data[j];
			ps->data[j]=peo;
		}
	}
	printf("排好啦！想看看嘛~\n");
}
 
 
//显示 
void show(const num_con *ps)
{
	int i=0;
	if(ps->size==0)
		printf("通讯录为空\n");
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n","名字","电话","类别","地址"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[i].name,
			ps->data[i].tele,
			ps->data[i].category,
			ps->data[i].email);	
		}	
	}
}


//清空 
void destory(num_con * ps)
{
	free(ps->data);
	ps->data=NULL;	
	ps->size=0;
	system("cls");
	printf("已被清空\n");
		
}

//加载 
void load(num_con *ps)
{
	
	people t={0};//创建成员信息的临时变量 
	FILE*pf=fopen("CONTACT","rb");
	if(pf==NULL)
	{
		printf("load::%s\n",strerror(errno));//错误信息
		return; 
	}
	//读取文件
	while(fread(&t,sizeof(people),1,pf))//如果读到 0 ，即读取完毕 
	{
		check(ps);//检查容量
		ps->data[ps->size]=t;
		ps->size++; 
	}
	fclose(pf); 
	pf=NULL;
}


void save(num_con *ps)
{
	int i=0;
	FILE* pf=fopen("CONTACT","wb");
	if(pf==NULL)
	{
		printf("save::%s\n",strerror(errno));//错误信息 
		return ;
	}
	
	//写入文件
	for(i=0;i<ps->size;i++)
	{
		fwrite(&(ps->data[i]),sizeof(people),1,pf);

	}
	fclose(pf);
	pf=NULL; 
	system("cls"); 
	printf("保存成功\n"); 
 } 





