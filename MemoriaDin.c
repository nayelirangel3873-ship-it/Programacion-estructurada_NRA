//Ejemplo 3:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
    char nombre[30];
    float promedio;
};

int main(){
    struct Alumno *grupo;
    int n;

    printf("Cuantos alumnos deseas registrar? ");
    scanf("%d", &n);
    getchar(); // limpia buffer

    grupo = malloc(n * sizeof(struct Alumno));
    if(grupo == NULL){
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("\nNombre del alumno %d: ", i + 1);
        fgets(grupo[i].nombre, 30, stdin);
        grupo[i].nombre[strcspn(grupo[i].nombre, "\n")] = '\0';
        printf("%f", &grupo[i].promedio);
    }
return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    int n;
    printf("Cuantos elementos deseas guardar? \n");
    scanf("%d", &n);

    numeros = (int*)malloc(n*sizeof(int));
    if(numeros == NULL){
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDatos ingresados:\n");
    for(int i = 0; i < n; i++)
        printf("%d", numeros[i]);
    free(numeros);

    return 0;
}
*/
