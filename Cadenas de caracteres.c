/*
// Ejemplo 1

#include <stdio.h>

int main()
{
    char nombre[30];
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);
    printf("Hola, %s!\n", nombre);

return 0;
}

// Ejemplo 2: #include<st>

#include<string.h>

int main()
{
    char clave[20];
    printf("Introduce la clave: ");
    scanf("%s", clave);

    if(strcmp(clave, "pascual") == 0){
        printf("Acceso concedido.\n");
        }
    else{
        printf("Acceso denegado.\n");
        }

return  0;
}
*/

// Ejemplo 3

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[20];
    char mensaje[40] = "Hola ";

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    strcat(mensaje, nombre);
    printf("%s, bienvenido al sistema.\n", mensaje);

    return 0;
}


/*
// Ejemplo de cadena de caracteres

#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[20] = "Juan";
    char saludo[40] = "Hola ";
    strcat(saludo, usuario);
    printf("%s", saludo);
    return 0;
}
*/
