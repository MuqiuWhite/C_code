#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	//打开
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	//打开
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}

	////读文件
	////随机读,c
	//fseek(pf, 2, SEEK_SET);
	//int ch1 = fgetc(pf);//读完c就到了d
	//printf("%c\n", ch1);

	//fseek(pf, -2, SEEK_CUR);//b对于d偏移量为-2
	//int ch2 = fgetc(pf);//b
	//printf("%c\n", ch2);

	////计算当前文件指针相对于起始位置的偏移量
	//int ret = ftell(pf);//读完b就到了c
	//printf("%d\n", ret);//2


	//rewind(pf);
	//ch2 = fgetc(pf);
	//printf("%c\n", ch2);//a

	//int a = 10000;

	//fwrite(&a, 4, 1, pf);//二进制的形式写到文件中

//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




