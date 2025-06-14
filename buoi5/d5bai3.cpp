#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, sum = 0;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);


    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Tong cac chu so cua %d la: %d\n", n, sum);

    return 0;
}

