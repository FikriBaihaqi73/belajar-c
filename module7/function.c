#include <stdio.h>
#include <string.h>

// void sapa() {
//     printf("Halo, Selamat Belajar C!\n");
// }

int tambah(int a, int b) {
    return a + b;
}

int main() {
    // sapa();
    int hasil = tambah(5, 3);
    printf("Hasil penjumlahan: %d\n", hasil);
    return 0;
}