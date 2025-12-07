#include <stdio.h>

int main() {
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    // 1️⃣ Calcul de la longueur de chaine1
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    // 2️⃣ Copie de chaine1 dans copie
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';  // Fin de chaîne

    printf("Copie de chaine1 : %s\n", copie);

    // 3️⃣ Concaténation dans concat
    // Copie de chaine1 dans concat
    i = 0;
    int j = 0;
    while (chaine1[i] != '\0') {
        concat[j] = chaine1[i];
        i++;
        j++;
    }

    // Ajout de chaine2 à la suite
    int k = 0;
    while (chaine2[k] != '\0') {
        concat[j] = chaine2[k];
        j++;
        k++;
    }
    concat[j] = '\0'; // Fin de chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}
