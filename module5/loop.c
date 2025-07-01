#include <stdio.h>

int main() {
    // int i = 1;
    // while
    // while (i <= 5) {
    //     printf("pengulangan ke : %d\n", i);
    //     i++;
    // }
    
    // do while
    // do {
    //     printf("pengulangan ke : %d\n", i);
    //     i++;
    // } while (i >= 3);

    // for
    // for (int i = 1; i <= 5; i++) {
    //     printf("pengulangan ke : %d\n", i);
    // }

    // break statement
    // for (int i = 1; i <= 10; i++) {
    //     if (i == 4) break;
    //     printf("pengulangan ke : %d\n", i);
    // }

    // continue statement
    // for (int i = 1; i <= 5; i++) {
    //     if (i == 3) continue;
    //     printf("pengulangan ke : %d\n", i);
    // }

    // nested loop
    // int n = 5;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // nested loop bikin piramida
    int n= 4;
    for(int i = 1; i <= n; i++) {
        for (int spasi = 1; spasi <= n - i; spasi++) {
            printf(" ");
        }
        for (int bintang = 1; bintang <= (2 * i) - 1; bintang++) {
            printf("*");
        }
        printf("\n");
    }
    
}
    