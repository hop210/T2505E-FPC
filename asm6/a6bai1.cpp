 // tinh trung binh cong cac so le trong mang n so
 
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

 	int tong = 0;
    int c = 0;

    printf("Cac so le trong mang la: ");
    for (int i = 0; i < size; i++) {
        if (player[i] % 2 != 0) {
            printf("%d ", player[i]);
            tong += player[i];
            c++;
        }
    }
    
   	 if (c > 0) {
        float trungBinh = (float)tong / c;
        printf("\nTrung binh cong cac so le la: %.2f\n", trungBinh);
    } else {
        printf("\nMang khong co so le nao de tinh trung binh!\n");
    }

   	
//   	printf("so trung binh cong cac so le cua mang la :  %d", );
}
 
