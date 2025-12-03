#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        if (i % 11 == 0) {
            continue; // passe au nombre suivant si divisible par 11
        }

        if (i % 5 == 0 || i % 7 == 0) {
            somme += i; // ajoute à somme si divisible par 5 ou 7
        }

        if (somme > 5000) {
            break; // arrête la boucle si somme dépasse 5000
        }
    }

    printf("La somme finale est : %d\n", somme);
    return 0;
}
