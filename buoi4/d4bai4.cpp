#include <stdio.h>

int main() {
    int n, reversed = 0;

    // Nhap so nguyên n
    printf("Nhap so nguyên n: ");
    scanf("%d", &n);

    int original = n; // Luu lai de in ket qua

    // Ðao nguoc so
    while (n != 0) {
        int digit = n % 10;          // Lay chu so cuoi
        reversed = reversed * 10 + digit; // Thêm vào ket qua dao nguoc
        n /= 10;                     // Bo chu so cuoi
    }

    printf("So dao nguoc cua %d là: %d\n", original, reversed);

    return 0;
}

