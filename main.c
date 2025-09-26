#include <stdio.h>


int main()
{
    int cal;
    int edad;
    printf("Escribe tu calificacion: \n");
    scanf("%d", &cal);
    printf("Escribe tu edad: \n");
    scanf("%d", &edad);

    if(edad >= 18)
    {
        if(cal>=60)
            {
            printf("Mayor de edad aprobado");
            }
        else
            {
            printf("Mayor de edad reprobado");
            }

    }
    else //es menor de edad
    {
       if(cal>=60)
            {
            printf("Menor de edad aprobado");
            }
       else
            {
           printf("Menor de edad reprobado");
            }
    }
    return 0;
}
