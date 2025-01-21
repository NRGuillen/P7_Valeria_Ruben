#include <stdio.h>
#include <string.h>


/*NOTION: 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

- Función recursiva para verificar si una cadena es palíndroma.


bool esPalindromoRec(const char *str, int inicio, int fin) {
    if (inicio >= fin) return true; // Caso base: vacío o un solo char
    if (str[inicio] != str[fin]) return false;
    return esPalindromoRec(str, inicio+1, fin-1);
}

bool esPalindromo(const char *str) {
    int len = strlen(str);
    return esPalindromoRec(str, 0, len-1);
}

int main() {
    const char *cadena = "radar";
    if (esPalindromo(cadena))
        printf("\"%s\" es palindroma.\n", cadena);
    else
        printf("\"%s\" no es palindroma.\n", cadena);
    return 0;
}


