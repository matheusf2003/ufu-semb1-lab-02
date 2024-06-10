#include <stdio.h>

int soma();

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 20;
    int resultado;
    resultado = soma(a, b);
    printf("%d + %d = %d\n", a, b, resultado);
    return 0;
}

int soma(int x, int y) {
    return x + y;
}
