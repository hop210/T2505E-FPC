#include <stdio.h>

int main() {
    int n, sum = 0;

    // Nhap so nguyên n
    printf("Nhap so nguyên n: ");
    scanf("%d", &n);

    // Tính tong các uoc nho hon n
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Kiem tra so hoàn hao
    if (sum == n && n > 0) {
        printf("%d là so hoàn hao.\n", n);
    } else {
        printf("%d không phai là so hoàn hao.\n", n);
    }

    return 0;
}

