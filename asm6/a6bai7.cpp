// nhap mang n so nguyen, tim xem chuoi so duong ma co tong lon nhat la bao nhieu

#include <stdio.h>

int main() {
    int size;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &size);
    } while (size <= 0);

    int player[size];

    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &player[i]);
    }

    int chuoi = 0;
	int tong = 0;   
    int max = 0;    

    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            chuoi++;
            tong += player[i];
            if (tong > max) {
                max = tong;
            }
        } else {
            chuoi = 0;
			tong=0;  
        }
    }

    printf("Chuoi so duong ma co tong lon nhat la: %d\n", max);


}

