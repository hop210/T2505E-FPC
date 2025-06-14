 // nhap vao 1 mang so nguyen, sau do nhap 1 so x. tim xem co x trong mang khong
 
 #include <stdio.h>

int main() {
    int size;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &size);
    } while (size <= 0);

    int player[size];

    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &player[i]);
    }
	int x;
	printf("Nhap x: ");
    scanf("%d", &x);
    
	int f = 0; 

    for (int i = 0; i < size; i++) {
        if (player[i] == x) {
            f = 1;
            break;
        }
    }

    if (f) {
        printf("X co trong mang.\n");
    } else {
        printf("X khong co trong mang.\n");
    }



}

