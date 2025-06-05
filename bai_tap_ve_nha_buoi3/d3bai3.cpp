#include <stdio.h>

int main(){
	int tienCanRut;
	
	printf("Nhap so tien can rút : ");
    scanf("%d", &tienCanRut);
    
    if (tienCanRut % 10000 != 0 || tienCanRut <= 0) {
        printf("So tien không hop le.\n");
        return 1;
    }
    
    int t500, t200, t100, t50, t20, t10;
    
    if (tienCanRut >= 500000) {
        t500 = tienCanRut / 500000;
        tienCanRut = tienCanRut % 500000;
    } else {
        t500 = 0;
    }

    if (tienCanRut >= 200000) {
        t200 = tienCanRut / 200000;
        tienCanRut = tienCanRut % 200000;
    } else {
        t200 = 0;
    }

    if (tienCanRut >= 100000) {
        t100 = tienCanRut / 100000;
        tienCanRut = tienCanRut % 100000;
    } else {
        t100 = 0;
    }

    if (tienCanRut >= 50000) {
        t50 = tienCanRut / 50000;
        tienCanRut = tienCanRut % 50000;
    } else {
        t50 = 0;
    }

    if (tienCanRut >= 20000) {
        t20 = tienCanRut / 20000;
        tienCanRut = tienCanRut % 20000;
    } else {
        t20 = 0;
    }

    if (tienCanRut >= 10000) {
        t10 = tienCanRut / 10000;
        tienCanRut = tienCanRut % 10000;
    } else {
        t10 = 0;
    }


    printf("So luong tung loai tien can tra ve:\n");
    if (t500 > 0) printf("%d to 500000 VND\n", t500);
    if (t200 > 0) printf("%d to 200000 VND\n", t200);
    if (t100 > 0) printf("%d to 100000 VND\n", t100);
    if (t50  > 0) printf("%d to 50000 VND\n",  t50);
    if (t20  > 0) printf("%d to 20000 VND\n",  t20);
    if (t10  > 0) printf("%d to 10000 VND\n",  t10);

    return 0;
    
} 
