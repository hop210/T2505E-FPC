#include <stdio.h>

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

    printf("Doan chua tat ca cac gia tri trong mang la: [%d, %d]\n", min, max);

}

