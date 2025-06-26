#include <stdio.h>

int main() {
    int x = 10;
    int y = 8;
    float z = 5.5;

    printf("pertambahan: %d\n", x + y);
    printf("pengurangan: %d\n", x - y);
    printf("perkalian: %d\n", x * y);
    printf("pembagian: %d\n", x / y);
    printf("hasil dari x * y - z: %.1f\n", x * y - z);
    printf("halo ges %d dan %d tidak lupa dengan %.1f", x, y, z);
    return 0;
}