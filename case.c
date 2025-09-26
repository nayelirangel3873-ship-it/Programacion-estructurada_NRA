#include <stdio.h>


int main()
{
    int x;
    int op;
    printf("Escribe un numero: ");
    scanf("%d", &x);
    printf("Escriba 1 para saber si es positivo o no,\n Esriba 2 para saber si es par o impar: ");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            if(x>0)
                printf("positivo");
            else
                printf("No positivo");
        break;
        case 2:
            if(x%2 ==0)
                printf("Es par");
            else
                printf("Es impar");
    }



    return 0;
}
