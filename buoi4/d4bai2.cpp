#include <stdio.h>

int main() {
    int n;

    // Nhap so nguy�n n
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    // T�m so lon nhat nho hon n chia het cho ca 2 v� 3 (tuc l� chia het cho 6)
    for (int i = n - 1; i >= 0; i--) {
        if (i % 6 == 0) {
            printf("So lon nhat nho hon %d v� chia het cho ca 2 v� 3 l�: %d\n", n, i);
            break;
        }
    }

    return 0;
}

