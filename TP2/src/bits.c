#include <stdio.h>

int main() {
    unsigned int d = 0x1008; // exemple
    int bit4, bit20;

    bit4  = (d >> (32-4)) & 1;  // 4ème bit de gauche
    bit20 = (d >> (32-20)) & 1; // 20ème bit de gauche

    if (bit4 && bit20)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
