#include <stdio.h>


int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int a, b;

    printf("Nhap hai so nguyen a va b: ");
    scanf("%d%d", &a, &b);

    if (a == 0 || b == 0) {
        printf("Khong the tinh UCLN hoac BCNN voi so 0.\n");
        return 1;
    }

    int u = ucln(a, b);
    int bcn = bcnn(a, b);

    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", a, b, u);
    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n", a, b, bcn);

    return 0;
}

