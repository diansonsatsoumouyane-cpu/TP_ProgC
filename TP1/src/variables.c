#include <stdio.h>

int main() {
    // Déclarations et affectations
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    short s = -123;
    signed short ss = -300;
    unsigned short us = 500;

    int i = -1000;
    signed int si = -2000;
    unsigned int ui = 4000;

    long int li = -100000L;
    signed long int sli = -200000L;
    unsigned long int uli = 300000UL;

    long long int lli = -5000000000LL;
    signed long long int slli = -6000000000LL;
    unsigned long long int ulli = 7000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749L;

    // Affichages
    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("\nshort = %d\n", s);
    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("\nint = %d\n", i);
    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("\nlong int = %ld\n", li);
    printf("signed long int = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("\nlong long int = %lld\n", lli);
    printf("signed long long int = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("\nfloat = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
