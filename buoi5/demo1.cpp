#include <stdio.h>

int main() {

int x;

do{
	printf("nhap gia tri x>0:");
	scanf("%d",&x);
	if(x<=0){
		printf("Vui long nhap lai gia tri!");
	}
}while(x<=0);

}
