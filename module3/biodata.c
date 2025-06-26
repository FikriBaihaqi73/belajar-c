#include <stdio.h>

int main() {
    char nama[50];
    int umur;
    char jenis_kelamin;
    float ipk;
    char alamat[100];

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan jenis kelamin(L/P): ");
    scanf(" %c", &jenis_kelamin);

    printf("Masukkan IPK: ");
    scanf("%f", &ipk);
    getchar();

    printf("Masukkan alamat: ");
    fgets(alamat, sizeof(alamat), stdin);


    printf("\n___________Biodata_____________\n");

    printf("Nama: %s", nama);
    printf("Umur: %d\n", umur);
    printf("Jenis Kelamin: %c\n", jenis_kelamin);
    printf("IPK: %.2f\n", ipk);
    printf("Alamat: %s\n", alamat);
    return 0;
}