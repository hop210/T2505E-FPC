#include <stdio.h>

int main() {
    int n, maxDigit = 0;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        n /= 10;
    }


    printf("Chu so lon nhat la: %d\n", maxDigit);

    return 0;
}

