#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '+';
    int resultat;

    switch(op) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultat = num1 / num2;
            else {
                printf("Erreur : division par zero\n");
                return 1;
            }
            break;
        case '%':
            if (num2 != 0)
                resultat = num1 % num2;
            else {
                printf("Erreur : modulo par zero\n");
                return 1;
            }
            break;
        case '&':
            resultat = num1 & num2;
            break;
        case '|':
            resultat = num1 | num2;
            break;
        case '~':
            resultat = ~num1; // opération NOT sur num1
            break;
        default:
            printf("Operateur inconnu\n");
            return 1;
    }

    printf("Resultat : %d\n", resultat);
    return 0;
}


