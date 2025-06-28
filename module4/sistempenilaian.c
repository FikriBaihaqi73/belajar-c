#include <stdio.h>
#include <string.h>

int main() {
    char nama[100];
    int nim;
    float mtk, coding, ing, rata;
    char predikat[20];
    int kelulusan = 1;

    printf("Masukkan Nama:");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM:");
    scanf("%d", &nim);
    getchar();

    printf("Masukkan nilai mtk:");
    scanf("%f", &mtk);
    getchar();

    printf("Masukkan nilai Pemrograman:");
    scanf("%f", &coding);
    getchar();

    printf("Masukkan nilai Bahasa inggris:");
    scanf("%f", &ing);
    getchar();
    
    rata = (mtk + coding + ing) / 3;

    if (mtk < 6.00) {
        printf("Anda tidak lulus karena nilai mtk anda kurang dari 60 nilai anda adalah: %.2f\n", mtk);
        kelulusan = 0;
    } if (coding < 6.00) {
        printf("Anda tidak lulus karena nilai pemrograman anda kurang dari 60 nilai anda adalah: %.2f\n", coding);
        kelulusan = 0;
    } if (ing < 6.00) {
        printf("Anda tidak lulus karena nilai bahasa inggris anda kurang dari 60 nilai anda adalah: %.2f\n", coding);
        kelulusan = 0;
    }

    if (kelulusan == 1) {

    int range = (int)(rata);

    switch(range) {
        case 10:
        case 9:
        strcpy(predikat, "Istimewa");
        break;
        case 8:
        strcpy(predikat, "Sangat Baik");
        break;
        case 7:
        strcpy(predikat, "Baik");
        break;
        case 6:
        strcpy(predikat, "cukup");
        break;
        default:
        strcpy(predikat, "Tidak lulus");
    }
    printf("\nData mahasiswa dan hasilnya\n");
    printf("Nama: %s", nama);
    printf("Nim: %d\n", nim);
    printf("Nilai mtk: %.2f\n", mtk);
    printf("Nilai pemrograman: %.2f\n", coding);
    printf("Nilai bahasa inggris: %.2f\n", ing);
    printf("Nilai Rata-rata: %.2f\n", rata);
    printf("Predikat: %s\n", predikat);
    return 0;
    }
}