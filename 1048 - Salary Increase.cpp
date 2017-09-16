#include <stdio.h>
main()
{
    double x,salary,money;
    int per;
    scanf("%lf", &x);
    if(x<=400)
    {
        salary=x+x*0.15;
        money=salary-x;
        per=15;
    }
    else if(x<=800)
    {
        salary=x+x*0.12;
        money=salary-x;
        per=12;
    }
    else if(x<=1200)
    {
        salary=x+x*0.10;
        money=salary-x;
        per=10;
    }
    else if(x<=2000)
    {
        salary=x+x*0.7;
        money=salary-x;
        per=7;
    }
    else
    {
        salary=x+x*0.4;
        money=salary-x;
        per=4;
    }
    printf("Novo salario: %.2lf\n", salary);
    printf("Reajuste ganho: %.2lf\n",money);
    printf("Em percentual: %d %%\n", per);
}
