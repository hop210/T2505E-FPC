#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    // Xu l� dac biet neu n < 0
    if (n < 0) {
        printf("Kh�ng c� so Fibonacci n�o nho hon %d.\n", n);
        return 0;
    }

    int f0 = 0, f1 = 1, fn = 1;

    // Duyet d�y Fibonacci cho den khi fn > n
    while (fn <= n) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }

    printf("So Fibonacci tiem can duoi cua %d l�: %d\n", n, f0);

    return 0;
}

