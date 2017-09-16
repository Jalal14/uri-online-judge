#include <stdio.h>
main()
{
    double N1,N2,N3,N4;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    double avg=(N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);
    printf("Media: %.1lf\n", avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg<=6.9 && avg>=5.0)
    {
        printf("Aluno em exame.\n");
        double N5;
        scanf("%lf", &N5);
        printf("Nota do exame: %.1lf\n", N5);
        double avrg=(avg+N5)/2;
        if(avrg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avrg);

    }
}
