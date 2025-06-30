#include <stdio.h>
#include <string.h>

int main() {
    char nama_pelanggan[100];
    int umur;
    char jenis_kelamin;
    int film, harga_satuan_tiket = 0, tiket;
    int total_harga_tiket, discount = 0, total_pembayaran;
    char nama_film[100], waktu_tayang[100], kategori_usia[100];

    printf("========= DAFTAR FILM ========");
    printf("\n1. Avengers: Endgame (13.00)\n");
    printf("2. Coco (15.00)\n");
    printf("3. Interstellar (18.00)\n");
    printf("4. Joker (20.00)\n");

    printf("\n========= DAFTAR HARGA ========\n");
    printf("Anak-anak (<12 tahun) = Rp25.000\n");
    printf("Dewasa (12-59 tahun)  = Rp50.000\n");
    printf("Lansia (>=60 tahun)   = Rp35.000\n");

    // input data pelanggan
    printf("Masukkan nama pelanggan: ");
    fgets(nama_pelanggan, sizeof(nama_pelanggan), stdin);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &jenis_kelamin);

    printf("Masukkan kode film(1-4): ");
    scanf("%d", &film);

    printf("Masukkan jumlah tiket: ");
    scanf("%d", &tiket);

    // tentuin film dan jadwal
    switch (film) {
        case 1:
            strcpy(nama_film, "Avengers: Endgame");
            strcpy(waktu_tayang, "13.00");
        break;
        case 2:
            strcpy(nama_film, "Coco");
            strcpy(waktu_tayang, "15.00");
        break;
        case 3:
            strcpy(nama_film, "Interstellar");
            strcpy(waktu_tayang, "18.00");
        break;
        case 4:
            strcpy(nama_film, "Joker");
            strcpy(waktu_tayang, "20.00");
        break;
        default:
            printf("Kode film tidak valid\n");
            return 0;
        break;
    }

    // tentuin harga dan kategori umur
    if (umur < 12) {
        strcpy(kategori_usia, "Anak-anak (<12 tahun)");
        harga_satuan_tiket = 25000;
    } else if ( umur >= 60) {
        strcpy(kategori_usia, "Lansia (>=60 tahun)");
        harga_satuan_tiket = 35000;
    } else {
        strcpy(kategori_usia, "Dewasa (12-59 tahun)");
        harga_satuan_tiket = 50000;
    }

    // notalin harga

    total_harga_tiket = harga_satuan_tiket * tiket;

    if (tiket >= 3) {
        discount = total_harga_tiket * 10/100;
    }

    total_pembayaran = total_harga_tiket - discount;

    printf("\n========= STRUK PEMBAYARAN ========\n");
    printf("Nama Pelanggan: %s", nama_pelanggan);
    printf("Umur: %d\n", umur);
    printf("Jenis Kelamin: %c\n", jenis_kelamin);
    printf("Film: %s\n", nama_film);
    printf("Waktu Tayang: %s\n", waktu_tayang);
    printf("Kategori Usia: %s\n", kategori_usia);
    printf("Jumlah Tiket: %d\n", tiket);
    printf("Harga Satuan Tiket: Rp%d\n", harga_satuan_tiket);
    printf("Total Harga Tiket: Rp%d\n", total_harga_tiket);
    printf("Diskon: Rp%d\n", discount);
    printf("Total Pembayaran: Rp%d\n", total_pembayaran);

    return 0;
}

