#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//���ļ�
//	FILE *pf = fopen("C:\\Users\\LENOVO-\\Desktop\\data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	fputc('h', pf);
//	fputc('h', pf);
//	//�ر��ļ�
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
//	//���ļ�
//	FILE *pf = fopen("C:\\Users\\LENOVO-\\Desktop\\data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//д�ļ�
//	int a = fgetc(pf);//
//	printf("%c\n", a);
//
//	a = fgetc(pf);
//	printf("%c\n", a);
//
//	a = fgetc(pf);
//	printf("%c\n", a);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//д�ļ�
//	int a = fgetc(stdin);//�൱��getchar(); scanf("%c",a);
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
//	���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	д�ļ�,дһ���ַ���
//	fputs("hello c\n", pf);
//	fputs("fighting", pf);
//
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�����һ������
//	char arr[20] = {0};
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//��ʽ�����
//	fprintf(pf, "%d  %lf", s.a, s.c);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//���ļ�
//	fscanf(pf, "%d  %lf", &(s.a), &(s.c));
//	printf("%d    %lf", s.a, s.c);
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	//�Զ�����д���ļ�
//	fwrite(&s,sizeof(s),1,pf);
//	
//
//	//�ر��ļ�
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

	//��һ����ʽ������ת�����ַ����ŵ�arr��
	sprintf(arr, "%d %lf", s.a, s.c);
	printf("%s\n", arr);

	//��arr�е��ַ�������ȡһ����ʽ�������ݷ���temp��
	sscanf(arr,"%d %lf", &(temp.a), &(temp.c));
	printf("%d    %lf", s.a, s.c);

}