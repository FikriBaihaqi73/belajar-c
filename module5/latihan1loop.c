#include <stdio.h>

int main() {
    int n;
    int k;
    // printf("Masukkan nilai n: ");
    // scanf("%d", &n);
    // for (int i =1; i <= n; i++) {
    //     printf("%d\n", i);
    // }

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai k: ");
    scanf("%d", &k);
    for(int i = 1; i <= n; i++) {
        for (int spasi = 1; spasi <= n - i; spasi++) {
            printf(" ");
        }
        for (int bintang = 1; bintang <= (k * i) - 1; bintang++) {
            printf("*");
        }
        printf("\n");
    }
}