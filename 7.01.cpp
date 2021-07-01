#include<stdio.h>
int main(){
	int flag = 0;
	int x=0,y=0;
	while(scanf("%d %d",&x,&y)!=EOF){
		flag =0;
		if(x==0&&y==0){
			break;
		}
		int temp = 0;
		for(int i = x;i<=y;i++){
			temp =  i*(i+1)+41;
			for(int j =2;j<temp;j++){
				if(temp%j==0){
					flag = 1;
				}
			}
			if(flag!=0){
				break;
			}
		}
		if(flag == 0){
		printf("OK\n");
	    }else if(flag == 1){
		printf("Sorry\n");
	    }
	}
	return 0;
}


