#include <stdio.h>

int main() {
    printf("Tailles des types de base en C :\n\n");

    printf("char                : %lu octets\n", sizeof(char));
    printf("signed char         : %lu octets\n", sizeof(signed char));
    printf("unsigned char       : %lu octets\n", sizeof(unsigned char));

    printf("\nshort               : %lu octets\n", sizeof(short));
    printf("signed short        : %lu octets\n", sizeof(signed short));
    printf("unsigned short      : %lu octets\n", sizeof(unsigned short));

    printf("\nint                 : %lu octets\n", sizeof(int));
    printf("signed int          : %lu octets\n", sizeof(signed int));
    printf("unsigned int        : %lu octets\n", sizeof(unsigned int));

    printf("\nlong int            : %lu octets\n", sizeof(long int));
    printf("signed long int     : %lu octets\n", sizeof(signed long int));
    printf("unsigned long int   : %lu octets\n", sizeof(unsigned long int));

    printf("\nlong long int       : %lu octets\n", sizeof(long long int));
    printf("signed long long    : %lu octets\n", sizeof(signed long long int));
    printf("unsigned long long  : %lu octets\n", sizeof(unsigned long long int));

    printf("\nfloat               : %lu octets\n", sizeof(float));
    printf("double              : %lu octets\n", sizeof(double));
    printf("long doubles         : %lu octets\n", sizeof(long double));
    

    return 0;
}

