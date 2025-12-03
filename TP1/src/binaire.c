#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int bits = sizeof(n) * 8;
    int leading_zero = 1;

    for (int i = bits - 1; i >= 0; i--) {
        if ((n >> i) & 1) {
            printf("1");
            leading_zero = 0;
        } else if (!leading_zero) {
            printf("0");
        }
    }

    if (leading_zero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
