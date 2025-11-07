// Punteros ejercicio 2: intercambiar valores (paso por referencia)
// Conceptos:
    //Se pasan direcciones con &.
    //La funcion modifica directamente las variables originales.

#include <stdio.h>

// Procedimiento (void) ¬
void intercambiar (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 9;

    printf("Antes: x = %d, y = %d\n", x, y);
    intercambiar(&x, &y);
    printf("Despues: x = %d, y = %d\n", x, y);

return 0;
}



/*
// Punteros ejercicio 1

#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x; // p guarda la direccion de x

    printf("Valor de x: %d\n", x);
    printf("Direccion de x: %p\n", &x);
    printf("Valor de p (direccion almacenada): %p\n", p);
    printf("Valor al que apunta p (*p): %d\n", *p);

    *p = 20; // modifica x a traves del puntero

    printf("Nuevo valor de x: %d\n", x);

    return 0;
}
*/
