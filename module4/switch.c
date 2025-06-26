#include <stdio.h>

int main() {
    int a;
    int b;
    int pilih;

    printf("Selamat datang di kalkulator sederhana\n");

    printf("menu \n");
    printf("1. penjumlahan \n");
    printf("2. pengurangan \n");
    printf("3. perkalian \n");
    printf("4. pembagian \n");
    printf("pilih 1-4: ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1:
            printf("Masukkan angka pertama: ");
            scanf("%d", &a);
            printf("Masukkan angka kedua: ");
            scanf("%d", &b);
            printf("Hasil penjumlahan: %d\n", a + b);
            break;
        case 2:
            printf("Masukkan angka pertama: ");
            scanf("%d", &a);
            printf("Masukkan angka kedua: ");
            scanf("%d", &b);
            printf("Hasil pengurangan: %d\n", a - b);
            break;
        case 3:
            printf("Masukkan angka pertama: ");
            scanf("%d", &a);
            printf("Masukkan angka kedua: ");
            scanf("%d", &b);
            printf("Hasil perkalian: %d\n", a * b);
            break;
        case 4:
            printf("Masukkan angka pertama: ");
            scanf("%d", &a);
            printf("Masukkan angka kedua: ");
            scanf("%d", &b);
            printf("Hasil pembagian: %d\n", a / b);
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    return 0;
}