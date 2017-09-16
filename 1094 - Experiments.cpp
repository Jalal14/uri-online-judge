#include <stdio.h>
main()
{
    int N,i,cat=0,rat=0,frog=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        int Amount;
        char Type;
        scanf("%d %c", &Amount, &Type);
        if(Type=='C')
        {
            cat+=Amount;
        }
        else if(Type=='R')
        {
            rat+=Amount;
        }
        else if(Type=='S')
        {
            frog+=Amount;
        }
    }
    int sum=cat+rat+frog;
    double coelhos=(double)cat/sum*100;
    double ratos=(double)rat/sum*100;
    double sapos=(double)frog/sum*100;
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", cat);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2lf %%\n", coelhos);
    printf("Percentual de ratos: %.2lf %%\n", ratos);
    printf("Percentual de sapos: %.2lf %%\n", sapos);
}
