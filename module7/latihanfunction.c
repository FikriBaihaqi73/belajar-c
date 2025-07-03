#include <stdio.h>
#define PI 3.14159

int luasLingkaran(float r) {
    return PI * r * r;
}

int main() {
    float r;
    
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    int luas = luasLingkaran(r);
    printf("Luas lingkaran: %d\n", luas);
}