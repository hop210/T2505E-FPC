// nhap mang n so nguyen, tim so le cuoi cung cua mang

#include <stdio.h>
 
 int main(){
	int size; 
	do{
	printf("nhap so luong phan tu các mang: ");
	scanf("%d",&size);
	} while (size<=0); 
	
	int player [size];
	
	for(int i=0;i<size;i++ ){
		printf("nhap pt vao mang:");
		scanf("%d",&player[i]); 
   	}  
	int n = 0;
    for (int i = 0; i < size; i++) {
        if (player[i] % 2 != 0) {
            n = player[i];
        }
    }
   	if(n==0){
   		printf("Khong co so le nao trong mang");
	} else{
		printf("so le cuoi cung cua mang la: %d",n);
	}

}
 
