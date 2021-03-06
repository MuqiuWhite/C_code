#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int miss(int* nums,int numsize)
{
	int x = 0;//0和谁异或都是本身
	//先跟数组中值异或
	for (int i = 0; i < numsize; i++)
	{
		x ^= nums[i];
	}
	//再跟[0,N]之间的数异或
	for (int j = 0; j < numsize+1; j++)
	{
		x ^= nums[j];
	}
	return x;
}
void REVERSE(int *nums,int left,int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left--;
		right++;
	}

}
void rotate(int* nums, int numssize, int k)
{
	if (k >= numssize)
	{
		k %= numssize;
	}

	REVERSE(nums, numssize-k, numssize - 1);
	REVERSE(nums, 0, numssize -k - 1);
	REVERSE(nums, 0, numssize - 1);

}