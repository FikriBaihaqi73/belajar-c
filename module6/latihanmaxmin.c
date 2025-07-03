#include <stdio.h>
#include <string.h>

int main() {
    int nilai[10], i , max, min;

    printf("=========== Masukkan 10 Nilai ======== \n");
    for (int i = 0; i < 10; i++) {
        printf("Masukkan nilai ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }
    max = nilai[0];
    min = nilai[0];
    for (int i = 0; i < 10; i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }
    printf("Nilai terbesar: %d\n", max);
    printf("Nilai terkecil: %d\n", min);
}