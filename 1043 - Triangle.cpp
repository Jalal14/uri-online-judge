#include <stdio.h>
main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double mxm,side,Perimetro,Area;
    if(A>B && A>C)
    {
        mxm=A;
        side=B+C;
    }
    else if(B>A && B>C)
    {
        mxm=B;
        side=A+C;
    }
    else if(C>A && C>B)
    {
        mxm=C;
        side=A+B;
    }
    if(side>mxm)
    {
        Perimetro=A+B+C;
        printf("Perimetro = %.1lf\n", Perimetro);
    }
    else
    {
        Area=0.5*(A+B)*C;
        printf("Area = %.1lf\n", Area);
    }
}
