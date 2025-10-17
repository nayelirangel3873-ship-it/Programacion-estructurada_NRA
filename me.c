#include <stdio.h>


int main()
{
    int M[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i, j, suma=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            suma+= M[i][j];
        }
    }
    printf("La suma de los elementos es: %d\n", suma);
    return 0;
}
