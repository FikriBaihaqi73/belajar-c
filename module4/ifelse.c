#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    if (nilai >= 70) {
        printf("Selamat, Anda lulus!\n");
    } else {
        printf("Maaf, Anda tidak lulus.\n");
    }
}