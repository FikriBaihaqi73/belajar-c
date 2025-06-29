#include <stdio.h>
#include <string.h>

int main() {
    char nama_mahasiswa[100];
    int nim;
    float nilai_mtk, nilai_pemrogramman, nilai_bahasa_inggris;
    float rata_rata, nilai_keseluruhan;
    int angka_predikat;
    char predikat[20];
    int lulus = 1;

    printf("Masukkan nama mahasiswa: ");
    fgets(nama_mahasiswa, sizeof(nama_mahasiswa), stdin);

    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan nilai MTK: ");
    scanf("%f", &nilai_mtk);

    printf("Masukkan nilai Pemrogramman: ");
    scanf("%f", &nilai_pemrogramman);

    printf("Masukkan nilai Bahasa Inggris: ");
    scanf("%f", &nilai_bahasa_inggris);

    nilai_keseluruhan = nilai_mtk + nilai_pemrogramman + nilai_bahasa_inggris;
    rata_rata = nilai_keseluruhan / 3;

    if (nilai_mtk < 60 || nilai_pemrogramman < 60 || nilai_bahasa_inggris < 60) {
        lulus = 0;
    }


    if (rata_rata >= 90) {
        angka_predikat = 1;
    } else if (rata_rata >= 80) {
        angka_predikat = 2;
    } else if (rata_rata >= 70) {
        angka_predikat = 3;
    } else if (rata_rata >= 60) {
        angka_predikat = 4;
    } else if (rata_rata < 60) {
        angka_predikat = 5;
    }

    switch (angka_predikat)
    {
    case 1:
        strcpy(predikat, "Istimewa");
        break;
    case 2:
        strcpy(predikat, "Sangat Baik");
        break;
    case 3:
        strcpy(predikat, "Baik");
        break;
    case 4:
        strcpy(predikat, "Cukup");
        break;
    case 5:
        strcpy(predikat, "Tidak Valid");
        break;
    default:
        break;
    }

    if (lulus == 0) {
        printf("\n====== Data Mahasiswa Tidak LULUS ======\n");

        printf("Mahasiswa dengan nama %s", nama_mahasiswa);
        printf("Dengan NIM %d\n", nim);
        printf("Tidak lulus karena: \n");

        if (nilai_mtk < 60) {
           printf("Nilai MTK kamu kurang dari 60, nilai kamu: %.2f", nilai_mtk); 
        }

        if (nilai_pemrogramman < 60) {
            printf("\nNilai Pemrogramman kamu kurang dari 60, nilai kamu: %.2f", nilai_pemrogramman);
        }

        if (nilai_bahasa_inggris < 60) {
            printf("\nNilai Bahasa Inggris kamu kurang dari 60, nilai kamu: %.2f\n", nilai_bahasa_inggris);
        }
    }

    if (lulus == 1) {
        printf("\n====== Data Mahasiswa LULUS ======\n");
        printf("Nama: %s", nama_mahasiswa);
        printf("NIM: %d\n", nim);
        printf("Nilai MTK: %.2f\n", nilai_mtk);
        printf("Nilai Pemrogramman: %.2f\n", nilai_pemrogramman);
        printf("Nilai Bahasa Inggris: %.2f\n", nilai_bahasa_inggris);
        printf("Rata-rata Nilai: %.2f\n", rata_rata);
        printf("Predikat: %s\n", predikat);
        
    }
    return 0;
}
