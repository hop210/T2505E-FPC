#include <stdio.h>
#include <math.h>


int laNguyenTo(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;


    printf("Nhap hai so nguyen a va b (a < b): ");
    scanf("%d%d", &a, &b);


    if (a >= b) {
        printf("Gia tri khong hop le! Can thoa man a < b.\n");
        return 1;
    }

    printf("Cac so nguyen to trong khoang tu %d den %d la:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (laNguyenTo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

