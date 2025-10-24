#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    //Estado de las celdas (0 = no descubierto, 1 = descubierto)
    int estadoMatriz[5][5] = {0};

    //Para almacenar las minas
    int minas[3][2];

    srand((unsigned int)time(NULL));

    //Genera minas aleatorias
    for (int i = 0; i < 3; i++) {
        int fila, columna;
        int minaExistente;

        do {
            minaExistente = 0;
            fila = rand() % 5;
            columna = rand() % 5;

            //Ve si ya existe una mina
            for (int j = 0; j < i; j++) {
                if (minas[j][0] == fila && minas[j][1] == columna) {
                    minaExistente = 1;
                    break;
                }
            }
        } while (minaExistente);

        //Almacena la mina
        minas[i][0] = fila;
        minas[i][1] = columna;
    }

    //Mustra la matriz oculta
    printf("Busca Minas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (estadoMatriz[i][j] == 0) {
                printf("*\t");
            } else {
                printf("%d\t", matriz[i][j]);
            }
        }
        printf("\n");
    }

    int fila, columna;

    while (1) {
        printf("\nSeleccione una fila (1-5): ");
        scanf("%d", &fila);
        printf("Seleccione una columna (1-5): ");
        scanf("%d", &columna);
        fila -= 1;
        columna -= 1;

        if (fila < 0 || fila >= 5 || columna < 0 || columna >= 5) {
            printf("Coordenadas inválidas\n");
            continue;
        }

        //Marca la celda como descubierta
        estadoMatriz[fila][columna] = 1;

        //Verifica si hay mina en la celda seleccionada
        int minaDetectada = 0;
        for (int i = 0; i < 3; i++) {
            if (minas[i][0] == fila && minas[i][1] == columna) {
                minaDetectada = 1;
                break;
            }
        }

        if (minaDetectada) {
            printf("Boom! Has pisado una mina\n");
            break;
        } else {
            printf("Estas a salvo\n");
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (estadoMatriz[i][j] == 0) {
                        printf("*\t");
                    } else {
                        printf("%d\t", matriz[i][j]);
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}
