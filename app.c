#include <stdio.h>

/* Función que suma dos números */
int sumar(int a, int b) {
    return a + b;
}

/* Función principal */
int main() {
    int resultado = sumar(2, 3);
    printf("Resultado: %d\n", resultado);
    return 0;
}
