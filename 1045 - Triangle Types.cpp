#include <stdio.h>
main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double mxm,mdl,mnm;
    if(A>B && A>C)
    {
        mxm=A;
        if(C>B)
        {
            mdl=C;
            mnm=B;
        }
        else
        {
            mdl=B;
            mnm=C;
        }
    }
    else if(B>A && B>C)
    {
        mxm=B;
        if(A>C)
        {
            mdl=A;
            mnm=C;
        }
        else
        {
            mdl=C;
            mnm=A;
        }
    }
    else if(C>A && C>B)
    {
        mxm=C;
        if(A>B)
        {
            mdl=A;
            mnm=B;
        }
        else
        {
            mdl=B;
            mnm=A;
        }
    }
    else
    {
        mxm=A;
        mdl=B;
        mnm=C;
    }
    A=mxm;
    B=mdl;
    C=mnm;
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(A*A==(B*B)+(C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if(A*A>(B*B)+(C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(A*A<(B*B)+(C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || B==C || A==C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

}
