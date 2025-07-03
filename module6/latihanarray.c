#include <stdio.h>
#include <string.h>

int main() {
    float nilai[10];
    float total = 0;
    float rata_rata;

    printf("=========== Masukkan 10 Nilai ======== \n");
    for (int i = 0; i < 10; i++) {
        printf("Masukkan Nilai ke-%d: ", i+1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    } 

    rata_rata = total / 10;
    printf("Rata-rata Nilai: %.2f\n", rata_rata);

}