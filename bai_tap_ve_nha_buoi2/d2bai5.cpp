#include <stdio.h>
#include <math.h>


int main(){
	int a;
	int b;
	int c;
	
	printf("nhap a=");
	scanf("%d",&a);
	
	printf("nhap b=");
	scanf("%d",&b);
	
	printf("nhap c=");
	scanf("%d",&c);
	
	float x;

	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh v� s� ngi�m"); 
			} else{
				printf("Phuong trinh v� ngi�m"); 
			} 
		} else{
			x = - (float)c / b;
			printf("Phuong trinh c� nghi�m l� x=%f",x);  
		} 
	}else{
		float denta;
		denta = pow(b,2)-4*a*c;
		if(denta >=0){
			if(denta==0){
				x=-b/(2*a);
				 printf("Phuong trinh c� nghi�m l� x=%f",x);  
			} else{
				float x1;
				float x2;
				x1=(-b+sqrt(denta))/(2*a);
				x2=(-b-sqrt(denta))/(2*a);
				printf("Phuong trinh c� 2  nghi�m l� \n x1=%f \n x2=%f",x1,x2);  
				
			} 
		}else{
			printf("Phuong trinh v� ngi�m"); 
		} 
		
	} 
	
} 
