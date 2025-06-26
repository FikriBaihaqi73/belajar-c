#include <stdio.h>

int main() {
    int a;
    int b;
    int pilih;
    int hasil;

    printf("Selamat datang di kalkulator sederhana\n");

    printf("menu \n");
    printf("1. penjumlahan \n");
    printf("2. pengurangan \n");
    printf("3. perkalian \n");
    printf("4. pembagian \n");
    printf("pilih 1-4: ");
    scanf("%d", &pilih);

    printf("masukkan angka pertama: ");
    scanf("%d", &a);
    printf("masukkan angka kedua: ");
    scanf("%d", &b);

    switch (pilih) {
        case 1:
        hasil = a + b;
            printf("Hasil penjumlahan: %d\n", hasil);
            break;
        case 2:
        hasil = a - b;
            printf("Hasil pengurangan: %d\n", hasil);
            break;
        case 3:
        hasil = a * b;
            printf("Hasil perkalian: %d\n", hasil);
            break;
        case 4:
        hasil = a / b;
            printf("Hasil pembagian: %d\n", hasil);
            break;
        default:
        break;
    }
    return 0;
}