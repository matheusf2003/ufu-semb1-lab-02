#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"


int main(int argc, char *argv[]) {
    int a;
    int b;
    int resultado;

    if (argc < 3) {
       return EXIT_FAILURE;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    resultado = soma(a, b);
    printf("%d + %d = %d\n", a, b, resultado);
    return 0;
}
