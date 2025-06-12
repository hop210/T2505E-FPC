#include <stdio.h>

int main() {
    int n, sum = 0;

    // Nhap so nguy�n n
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    // T�nh tong c�c uoc nho hon n
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Kiem tra so ho�n hao
    if (sum == n && n > 0) {
        printf("%d l� so ho�n hao.\n", n);
    } else {
        printf("%d kh�ng phai l� so ho�n hao.\n", n);
    }

    return 0;
}

