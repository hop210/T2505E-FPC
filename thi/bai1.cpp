#include <stdio.h>

int main(){
	int n;
	int s=0;
	
	do{
			printf("Nhap so nguyen n: ");
			scanf("%d",&n);
			if(n<=0){
				printf("Ban vua nhap khong phai so nguyen vui long nhap lai \n");
			}
	}
	while(n<=0);
		for(int i=1;i<=n;i++){
			s=s+i;
		}
	
	printf("tong tu 1 den n la: %d",s);
}
