// 头文件 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>
#define na 20
#define te 20
#define em 30
#define cate 20
#define first_size 3
enum Select
{
	Exit,
	Add,
	Dele,
	Find,
	Modify,
	Sort,
	Show,
	Destory, 
	Save,
};

typedef struct people
{
	char name[na];
	char tele[te];
	char category[cate];
	char email[em];
	
}people;

typedef struct num_con  //通讯录
{
	people *data;//结构体数组 存放好多人信息 
	int size;//记录当前已有的元素个数 
	int capa;//当前最大容量 capa ==size时，容量已满 
}num_con;


void menu();

void check(num_con *ps);//检查是否需要扩容 

int find_kind();//选择查找类型 

int find(num_con *ps,char name[na]);//查找名字 

void Initialize_con(num_con *ps);//初始化

void add(num_con *ps);//增加 

void dele(num_con *ps);//删除

void findkind(num_con *ps);//按类别查找 

void findname(num_con *ps);//按名字查找

void modify(num_con *ps);//修改 
 
void sort(num_con *ps);//排序 

void show(const num_con *ps);//显示 

void destory(num_con * ps);//清空 

void save(num_con *ps); //保存 

void load(num_con *ps);//加载 
