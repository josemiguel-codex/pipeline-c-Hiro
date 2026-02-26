#include <assert.h>

/* Declaración de la función a probar */
int sumar(int a, int b);

/* Programa de pruebas */
int main() {
    /* Pruebas unitarias */
    assert(sumar(2, 3) == 5);
    assert(sumar(-1, 1) == 0);
    assert(sumar(0, 0) == 0);

    return 0;
}
