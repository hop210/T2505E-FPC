#include <stdio.h>

int main(){
	int n;
	int s=0;
	
	do{
			printf("Enter positive integer n: ");
			scanf("%d",&n);
			if(n<=0){
				printf("The number you entered is not an positive integer, please re-enter \n");
			}
	}
	while(n<=0);
		for(int i=1;i<=n;i++){
			s=s+i;
		}
	
	printf("The sum of integers from 1 to n: %d",s);
}
