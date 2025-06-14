//Nhap mang n so nguyên, tim so luong các so duong liên tiep nhieu nhat  

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
    int max = 0;    

    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            chuoi++;
            if (chuoi > max) {
                max = chuoi;
            }
        } else {
            chuoi = 0;  
        }
    }

    printf("So luong so duong lien tiep nhieu nhat la: %d\n", max);

}

