#include <stdio.h>
main()
{
    float A,B,C;
    scanf("%f %f %f", &A, &B, &C);
    float TRIANGULO=0.5*A*C;
    float CIRCULO=3.14159*C*C;
    float TRAPEZIO=0.5*(A+B)*C;
    float QUADRADO=B*B;
    float RETANGULO=A*B;
    printf("TRIANGULO: %.3f\n", TRIANGULO);
    printf("CIRCULO: %.3f\n", CIRCULO);
    printf("TRAPEZIO: %.3f\n", TRAPEZIO);
    printf("QUADRADO: %.3f\n", QUADRADO);
    printf("RETANGULO: %.3f\n", RETANGULO);
}