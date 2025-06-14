 // tinh trung binh cong cac so le o vi tri chan trong mang n so
 
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

    int tong = 0;
    int c = 0;

    printf("Cac so le o vi tri chan la: ");
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 && player[i] % 2 != 0) {
            printf("%d ", player[i]);
            tong += player[i];
            c++;
        }
    }

    if (c > 0) {
        float trungBinh = (float)tong / c;
        printf("\nTrung binh cong cac so le o vi tri chan la: %.2f\n", trungBinh);
    } else {
        printf("\nKhong co so le nao o vi tri chan de tinh trung binh!\n");
    }


}

