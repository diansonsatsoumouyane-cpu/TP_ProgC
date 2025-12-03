
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Affichage des espaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Affichage des nombres croissants
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Affichage des nombres décroissants
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // nouvelle ligne après chaque niveau
    }

    printf("Generation de la pyramide terminee.\n");
    return 0;
}
