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
			printf("Nhap so nguyen n: ");
			scanf("%d",&n);
			if(n<=0){
				printf("Ban vua nhap khong phai so nguyen vui long nhap lai \n");
			}
	}
	while(n<=0);
	
	int c = isPrime(n);
	
	if(c==1){
		printf("n la so nguyen to");
	}else{
		printf("n khong phai la so nguyen to ");
	}
	
}
