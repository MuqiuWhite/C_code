#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	//��
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	//��
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}

	////���ļ�
	////�����,c
	//fseek(pf, 2, SEEK_SET);
	//int ch1 = fgetc(pf);//����c�͵���d
	//printf("%c\n", ch1);

	//fseek(pf, -2, SEEK_CUR);//b����dƫ����Ϊ-2
	//int ch2 = fgetc(pf);//b
	//printf("%c\n", ch2);

	////���㵱ǰ�ļ�ָ���������ʼλ�õ�ƫ����
	//int ret = ftell(pf);//����b�͵���c
	//printf("%d\n", ret);//2


	//rewind(pf);
	//ch2 = fgetc(pf);
	//printf("%c\n", ch2);//a

	//int a = 10000;

	//fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���

//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




