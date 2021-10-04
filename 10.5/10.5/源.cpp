#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//打开文件
//	FILE *pf = fopen("C:\\Users\\LENOVO-\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	fputc('h', pf);
//	fputc('h', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//int main()
//{
//	fputc('l', stdout);
//	fputc('o', stdout);
//	fputc('v', stdout);
//	fputc('e', stdout);
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE *pf = fopen("C:\\Users\\LENOVO-\\Desktop\\data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//写文件
//	int a = fgetc(pf);//
//	printf("%c\n", a);
//
//	a = fgetc(pf);
//	printf("%c\n", a);
//
//	a = fgetc(pf);
//	printf("%c\n", a);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//写文件
//	int a = fgetc(stdin);//相当于getchar(); scanf("%c",a);
//	printf("%c\n", a);
//
//	a = fgetc(stdin);
//	printf("%c\n", a);
//
//	a = fgetc(stdin);
//	printf("%c\n", a);
//	return 0;
//}

//int main()
//{
//	打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	写文件,写一行字符串
//	fputs("hello c\n", pf);
//	fputs("fighting", pf);
//
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件，读一行数据
//	char arr[20] = {0};
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}


//struct S
//{
//	int a;
//	double c;
//};
//int main()
//{
//	S s = { 1,2.1 };
//
//	//打开文件
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//格式化输出
//	fprintf(pf, "%d  %lf", s.a, s.c);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}

//struct S
//{
//	int a;
//	double c;
//	char name[10];
//};
//int main()
//{
//	S s = { 1,2.1 };
//
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//读文件
//	fscanf(pf, "%d  %lf", &(s.a), &(s.c));
//	printf("%d    %lf", s.a, s.c);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}

//struct S
//{
//	int a;
//	double c;
//	
//};
//int main()
//{
//	S s = {1, 2.1};
//
//	//打开文件
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//以二进制写入文件
//	fwrite(&s,sizeof(s),1,pf);
//	
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}

struct S
{
	int a;
	double c;
};
int main()
{
	char arr[100] = { 0 };

	struct S s = {1,1.2};
	struct S temp = {0};

	//把一个格式化数据转换成字符串放到arr里
	sprintf(arr, "%d %lf", s.a, s.c);
	printf("%s\n", arr);

	//从arr中的字符串里提取一个格式化的数据放入temp中
	sscanf(arr,"%d %lf", &(temp.a), &(temp.c));
	printf("%d    %lf", s.a, s.c);

}