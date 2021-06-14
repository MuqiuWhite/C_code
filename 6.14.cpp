#include <stdio.h>
int main()
{
   int *nums;
   int target=0;
   int i=0,n=0,j=0;
   scanf("%d",&n);
   nums=(int *)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
       scanf("%d",&nums[i]);
   }
   scanf("%d",&target);
   for(i<0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           int b=i;
           if(nums[i]+nums[++b]==target)
           {
               printf("[%d,%d]",nums[i],b);
               break;
           }
       }
   }
    return 0;
}
