#include <stdio.h>
double score()
{
    double num;
    while(1)
    {
        scanf("%lf", &num);
        if(num>=0 && num<11.0)
        {
            return num;
        }
        printf("nota invalida\n");
    }
}
int check()
{
    int a;
    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &a);
        if(a==1 || a==2)
        {
            return a;
        }
    }
}
int main()
{
    while(1)
    {
        double a,b,X;
        a=score();
        b=score();
        printf("media = %.2lf\n", (a+b)/2);
        X=check();
        if(X==1)
        {
            return main();
        }
        return 0;
    }
}