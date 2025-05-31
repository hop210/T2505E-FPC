#include <stdio.h>
int main(){
	float kwh;
	
	printf("Nhap so kwh =");
	scanf("%f",&kwh); 
	float tien;
	
	if(kwh>50){
		if(kwh>100){
			if(kwh>200){
						tien = kwh*2536;
					printf("sô tiên diên là: %.2f dong",tien); 
			}else{
					tien = kwh*2014;
				printf("sô tiên diên là: %.2f dong",tien); 
			}
		} else{
				tien = kwh*1734;
			printf("sô tiên diên là: %.2f dong",tien); 
		}
	}else{
			tien = kwh*1680;
		printf("sô tiên diên là: %.2f dong",tien); 
	}
	
}
