#include <stdio.h>
#include <string.h>

int main() {
    // int data[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Masukkan data ke-%d: ", i+1);
    //     scanf("%d", &data[i]);
    // }

    // for (int i = 0; i < 5; i++) {
    //     printf("Data ke-%d: %d\n", i+1, data[i]);
    // }

    char kata1[20] = "cinta", kata2[20];

    strcpy(kata2, kata1); // menyalin isi kata1 ke kata2
    if (strcmp(kata1, kata2) == 0) { // membandingkan kata1 dengan kata2 nilai 0 artinya sama
        printf("Keduanya sama.\n");
    } 
    printf("Panjang kata1: %lu\n", strlen(kata1));
}