#include <stdio.h>

	/*char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	���ؿƼ�
		int a = 1;
	void* p = &a;
	void* ����Է����������͵ĵ�ַ���޷���������
		�������Ԫ�ظ���
		һ��Ԫ�صĴ�С����λ���ֽ�
		cmpָ���ǣ�����ʱ�������Ƚϵ�2��Ԫ�صĺ���
		1, 3
		3, 5
		...
		�Ƚ�
		����
		sizeof(������)--���飬��������Ĵ�С����λΪ�ֽ� 16
		& ������--���飬����ĵ�ַ 4 / 8
		��Ԫ�ص�ַ��������Ԫ�ص�ַ��С 4 / 8�ֽ�
		��������Ԫ�أ�a[0]��С��4
		* a == *(a + 0) == a[0]
		a[1]�ĵ�ַ��4 / 8
		a[1] 4
		int(*)[4]
		����������ĵ�ַ�������飬��СΪ16
		a = *&a
		����ĵ�ַ + 1�������������飬���ǵ�ַ��4 / 8
		4 / 8
		�ڶ���Ԫ�ص�ַ 4 / 8
		Ҫ����ĵ�ַ
		size_t
		����ָ�� * cmp
		printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/
#include <string.h>
int main()
{
	/*char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/
	/*printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
		printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));
	/*int a[3][4] = { 0 };
	printf("%d\n", sizeof(a[0] + 1));*/
	return 0;
}