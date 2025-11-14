
// EEJEMPLO PARA ENTENDER EL STACK
// Esto muestra en pantalla el "sube y baja" de las llamadas

int cuenta(int n){
    if(n == 0)
        return 0;
        printf("Entrando con %d\n", n);
        int r = cuenta(n - 1);
        printf("Saliendo con %d\n", n);
        return r;
}
