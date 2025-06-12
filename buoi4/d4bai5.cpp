#include <stdio.h>

int main() {
    int n;
    
    // Nhap so nguy�n n
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    // Kiem tra n hop le
    if (n < 0) {
        printf("Vui l�ng nhap so nguy�n kh�ng �m.\n");
        return 0;
    }

    // Truong hop dac biet
    if (n == 0) {
        printf("Fibonacci thu %d l�: 0\n", n);
        return 0;
    }

    int f0 = 0, f1 = 1, fn;

    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    printf("Fibonacci thu %d l�: %d\n", n, (n == 1) ? f1 : fn);

    return 0;
}

