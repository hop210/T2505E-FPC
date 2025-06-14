#include <stdio.h>

int main() {
    int n;


    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    int temp = n;
    int allOdd = 1; 


    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) { // N?u là ch? s? ch?n
            allOdd = 0;
            break;
        }
        temp /= 10;
    }

    if (allOdd)
        printf("%d co toan chu so le.\n", n);
    else
        printf("%d KHONG co toan chu so le.\n", n);

    return 0;
}

