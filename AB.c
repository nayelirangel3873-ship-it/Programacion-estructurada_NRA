#include <stdio.h>


int main()
{
    int a=0;
    int b[3];
    int c[3][3]={00,01,02,10,11,12,20,21,22};
    int i, j;

    printf("%d\n", &a);
    printf("%d\n", &b[0]);
    printf("%d\n", &b[1]);
    printf("%d\n", &b[2]);
    printf("\n");

    printf("Direccion bidimensional:%d\n", &c);
    printf("%d\n", &c[0][0]);
    printf("%d\n", c[2][1]);

    printf("\nArreglo bidimensional 3x3\n");
    for(i=0; i<3;i++)
        {
         printf("\n", i);
         for(j=0; j<3; j++)
         {
          printf("%d\t", c[i][j]);
         }
        }
    return 0;
}
