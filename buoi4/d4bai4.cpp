#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Nhap so nguy�n n
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    int original = n; // Luu lai de in ket qua

    // �ao nguoc so
    while (n != 0) {
        int digit = n % 10;          // Lay chu so cuoi
        reversed = reversed * 10 + digit; // Th�m v�o ket qua dao nguoc
        n /= 10;                     // Bo chu so cuoi
    }

    printf("So dao nguoc cua %d l�: %d\n", original, reversed);

    return 0;
}

