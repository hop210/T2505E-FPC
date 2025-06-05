#include <stdio.h>

int main(){
	int thuNhapCaNam;
	
	printf("nhap thu nhap ca nam =");
	scanf("%d",&thuNhapCaNam); 
	
	float thue;
	 
	if(thuNhapCaNam > 60000000){
		if(thuNhapCaNam > 120000000){
			if(thuNhapCaNam > 216000000){
				if(thuNhapCaNam > 384000000){
					thue =  55000000 * 0.05 + 60000000*0.1 + 96000000* 0.15 +(thuNhapCaNam -216000000)*0.2;
					printf("can nop thue : %.2f dong ",thue);
				}else{
					thue = 55000000 * 0.05 + 60000000*0.1 + (thuNhapCaNam - 120000000 )* 0.15;
					printf("can nop thue : %.2f dong ",thue);
				}
			}else{
				thue =  55000000 * 0.05 + (thuNhapCaNam - 60000000 )* 0.1;
				printf("can nop thue : %.2f dong ",thue);
			}
		} else{
			thue =  (thuNhapCaNam - 5000000 )* 0.05 ;
			printf("can nop thue : %.2f dong ",thue);
		} 
	}else{
		printf("không phai nôp thuê"); 
	} 
	
} 
