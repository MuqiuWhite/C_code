#include <stdio.h>
struct t
{
	int wer;
	int qq;
};
typedef struct stu
{
	char name[20];
	struct t st;
	char tele[12];
	char sex[10];
	int age;
	double e;
	 
}a;

int main()
{
	
	struct stu s={"wdw",{123,456},"980924","180",23,5.20};
	printf("%s %s %s %d %e  ",s.name,s.tele,s.sex,s.age,s.e);
	printf("%d",s.st.wer);	
return 0;	
} 
