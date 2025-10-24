#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    srand((unsigned int)time(NULL));
    int numeroAleatorio = rand() % 4 + 0, numeroAleatorio2 = rand() % 4 + 0;

    // printf("%d\n %d\n", numeroAleatorio, numeroAleatorio2);

    int fila, columna;
    printf("Seleccione una fila\n");
    scanf("%d", &fila);
    printf("Seleccione una columna\n");
    scanf("%d", &columna);

    if (fila == numeroAleatorio && columna == numeroAleatorio2) {
        printf("Boom haz pisado una mina\n");
    } else {
        printf("Estas a salvo");
    }
    return 0;
}
