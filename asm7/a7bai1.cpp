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

    int max = abs(arr[0] - x);
    int xaNhat = arr[0];

    for (int i = 1; i < n; i++) {
        int khoangCach = abs(arr[i] - x);
        if (khoangCach > max) {
            max = khoangCach;
            xaNhat = arr[i];
        }
    }

    printf("Gia tri xa %d nhat trong mang la: %d\n", x, xaNhat);
    
//    
//     // Tim min và max cua mang
//    int min = arr[0], max = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] < min) min = arr[i];
//        if (arr[i] > max) max = arr[i];
//    }
//
//    // So sánh khoang cách toi x
//    int kctMin = abs(min - x);
//    int kctMax = abs(max - x);
//
//    if (kctMin > kctMax)
//        printf("Gia tri xa %d nhat trong mang la: %d\n", x, min);
//    else
//        printf("Gia tri xa %d nhat trong mang la: %d\n", x, max);
    


}

