#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define print(n) printf("the value of"#n"is %d",a)
#define h(x,y) x##y

#define 
int main()
{
	int a = 102,i=0;
	int b[32] = { 0 };
	for (i=31;a; i--)
	{
		b[i] = a % 2;
		a = a / 2;
	}
	c()

	return 0;
}
#include<stdio.h>
#define c(N) (((N&0X55555555)<<1)|((N&0xaaaaaaaa)>>1))

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", c(n));
	return 0;
}


//int bigdog = 10;
//printf("%d\n", h(big, dog));
//#define max 1
//#define add(x,y) ((x)+(y))//不能递归，不能宏内部再定义宏
//
//int sum = add(add(2,3),10);//可以
//printf("file:%s line:%d\n", __FILE__, __LINE__);
	//printf("file:%s line:%d\n", __TIME__, __DATE__);

	//int a = 10;
	//print(a);

大致思路：通过0对自身依次异或，将两个单独的数的异或后的结果找出，再通过结果将两个单独数分离开来
得到两组数，各自带着一个单独数，再通过0对自身依次异或，最后得到的两个结果就是两个单独数

例如 1 1 2 2 3 5

1.通过0对自身依次异或，得到的就是两个单独数异或的结果，即 1 ^ 1 ^ 2 ^ 2 ^ 3 ^ 5 = 3 ^ 5 = 6 = 110

2.找到异或后结果的二进制序列，找出为1的位数（如果为1，则说明两个单独数在这个位不相同，可凭此将两个数分离）, 我们可以发现在第二位和第三都是1，其实取哪一位都可以，目的是分离这两个数，这里我们取第二位

3.找到位数后，将按其他数的这个位数是否为1，还是为0分离，这就形成了两组数，各带一个单独数。
分离的两组数为 1 1 5和2 2 3

4.对这两组数通过0对自身依次异或，即得到的就是两个单独数。


int* singleNumbers(int* nums, int numsSize, int* returnSize) {
    int ret = 0;
    int i = 0;
    int num1 = 0;
    int num2 = 0;
    int pos = 0;
    int* arr = (int*)malloc(2 * sizeof(int));//要动态开辟内存空间存储返回值，返回类型为int*，不能使用临时数组
    //通过0对自身依次异或，将两个单独的数的异或后的结果找出，再通过结果将两个值分离开来
    for (i = 0; i < numsSize; i++)
    {
        ret ^= nums[i];
    }
    //找到异或后结果的二进制序列，找出为1的位数（如果为1，则说明两个单独数在这个位不相同，可凭此将两个数分离）
    for (i = 0; i < 32; i++)
    {
        if ((ret >> i) & 1 == 1)
        {
            pos = i;
            break;
        }
    }
    //找到位数后，将按其他数的这个位数是否为1，还是为0分离，这就形成了两组数
    //各带一个单独数

    //在分别自身异或，最后剩下的就是单独数
    for (i = 0; i < numsSize; i++)
    {
        if ((nums[i] >> pos) & 1 == 1)
        {
            num1 ^= nums[i];
        }
        else
        {
            num2 ^= nums[i];
        }
    }
    arr[0] = num1;
    arr[1] = num2;
    *returnSize = 2;
    return arr;
}

