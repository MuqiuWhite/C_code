#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
 
    int n = 1;
    int i = 0;
    int max = 0;
//    int maxindex = 0;
    int j = 0;
    char color[1000][16];
    int *cnum;
    while(n){
        scanf("%d",&n);
        cnum = (int *)malloc(sizeof(int) * n);
        for(i = 0;i < n;i ++)
        {
            scanf("%s",&color[i]);
        }
        for(i = n - 1;i >= 0;i --)
        {
            cnum[i] = 1;
            if(i != n - 1){
                for(j = n - 1;j > i;j -- )
                    if(strcmp(color[i],color[j]) == 0){
                        cnum[i] ++;
                    }
            }
        }
        max = cnum[0];
 //       maxindex = 0;
        for(i = 0;i < n;i ++){
            if(max < cnum[i]){
                max = cnum[i];
   //             maxindex = i;
            }
        }
        for(i = 0;i < n;i ++)
            if(max == cnum[i]){
                printf("%s\n",color[i]);
            }
         
 
    }
     
    return 0;
}
