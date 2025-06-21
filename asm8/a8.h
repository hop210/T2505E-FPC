#include <stdlib.h>

int tongCCS(){
	int tongChuSo(int n) {
    int tong = 0;
  	if (n < 0) n = -n;

    while (n > 0) {
        tong = tong + (n % 10);
        n = n / 10;
    }
    return tong;
}
}

int timUCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a); 
}

int timBCNN(int a, int b) {
    if (a == 0 || b == 0) return 0; 
    int ucln = timUCLN(a, b);
    return abs(a * b) / ucln;
    
}

