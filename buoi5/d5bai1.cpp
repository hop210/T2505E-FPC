#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    
    printf("\nTong cac uoc cua %d la: %d\n", n, sum);

    return 0;
}

