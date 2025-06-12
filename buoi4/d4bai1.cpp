#include <stdio.h>

int main() {
    int n;

    // Nhap so nguyên n
    printf("Nhap so nguyên n: ");
    scanf("%d", &n);

    printf("Các so le nho hon %d là:\n", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

