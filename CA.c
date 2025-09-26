#include <stdio.h>


int main()
{
    int edad;
    printf("Escribe la edad: \n");
    scanf("%d", &edad);

    if(edad >= 18)
    {
        if(edad >= 65)
            {
                printf("Adulto mayor");
            }
        else
            {
            printf("Adulto");
            }

    }
    else
    {
        printf("Menor de edad");
    }

    return 0;
}


