#include <stdio.h>

int main() {
    int n;

    // Nhap so nguy�n n
    printf("Nhap so nguy�n n: ");
    scanf("%d", &n);

    printf("C�c so le nho hon %d l�:\n", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

