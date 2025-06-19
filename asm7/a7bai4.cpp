#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;

    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap mang giá tri thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Tim min và max
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Tim x sao cho [-x, x] chua het mang
    int x = abs(min) > abs(max) ? abs(min) : abs(max);

    printf("Gia tri x nho nhat de doan [-x, x] chua het cac gia tri trong mang la: %d\n", x);
    printf("Tuc la doan [-%d, %d]\n", x, x);


}

