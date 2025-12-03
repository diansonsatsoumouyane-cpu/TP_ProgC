#include <stdio.h>

int main() {
    int compteur = 5; // changer la valeur pour tester (doit être < 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            if (i == 1 || i == compteur) {
                printf("* ");
            } 
            else if (j == 2 || j == i - 1) {
                printf("# ");
            } 
            else {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}
