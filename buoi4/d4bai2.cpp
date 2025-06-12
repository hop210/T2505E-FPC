#include <stdio.h>

int main() {
    int n;

    // Nhap so nguyên n
    printf("Nhap so nguyên n: ");
    scanf("%d", &n);

    // Tìm so lon nhat nho hon n chia het cho ca 2 và 3 (tuc là chia het cho 6)
    for (int i = n - 1; i >= 0; i--) {
        if (i % 6 == 0) {
            printf("So lon nhat nho hon %d và chia het cho ca 2 và 3 là: %d\n", n, i);
            break;
        }
    }

    return 0;
}

