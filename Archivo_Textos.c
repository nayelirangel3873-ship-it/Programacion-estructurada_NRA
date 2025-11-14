/*
// Ejemplo 1 - Escribir un archivo de texto

#include <stdio.h>

int main()
{
    FILE *f =fopen("salida.txt", "w");

    if(f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fprintf(f, "Hola mundo.\n");
    fprintf(f, "Este archivo fue creado desde C.\n");

    fclose(f);

    return 0;
}
*/

/*
// Ejemplo 2 - Leer un archivo línea por línea

#include <stdio.h>

int main()
{
    FILE *f = fopen("salida.txt", "r");
    char linea[100];

    if(f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    while(fgets(linea, 100, f) != NULL)
        printf("%s", linea);

    fclose(f);

return 0;
}
*/

// Ejemplo 3 - Guardar lista de números y luego leerlos

#include <stdio.h>

int main(){
    FILE *f;



return 0;
}
