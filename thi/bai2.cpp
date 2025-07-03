#include <stdio.h>

int isPrime(int c){
	if(c<=1){
		return c=0;
	}
	for (int i = 2; i*i <= c; i++){
		if(c % i ==0){
			return c=0;
		}
	}
	return c=1;
}

int main(){
	
	int n;
	do{
			printf("Enter positive integer n: ");
			scanf("%d",&n);
			if(n<=0){
				printf("The number you entered is not an positive integer, please re-enter \n");
			}
	}
	while(n<=0);
	
	int c = isPrime(n);
	
	if(c==1){
		printf("n is prime");
	}else{
		printf("n is not prime ");
	}
	
}
