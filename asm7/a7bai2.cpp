#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, x;

    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap mang giá tri thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    int min = abs(arr[0] - x);
    int ganNhat = arr[0];

    for (int i = 1; i < n; i++) {
        int khoangCach = abs(arr[i] - x);
        if (khoangCach < min) {
            min = khoangCach;
            ganNhat = arr[i];
        }
    }

    printf("Gia tri gan %d nhat trong mang la: %d\n", x, ganNhat);


}

