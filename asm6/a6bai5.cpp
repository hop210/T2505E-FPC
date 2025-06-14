// nhap mang n so nguyen, tim so duong nho nhat

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
   	int f = 0;
	int n;
	
    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            if (!f) {
                n = player[i]; 
                f = 1;
            } else if (player[i] < n) {
                n = player[i]; 
            }
        }
    }
    
   if (f) {
        printf("So duong nho nhat cua mang la: %d\n", n);
    } else {
        printf("Khong co so duong nao trong mang.\n");
    }

}
 
