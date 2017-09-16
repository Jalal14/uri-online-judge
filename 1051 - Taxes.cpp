#include <stdio.h>
int main()
{
    double salary,sum=0;
    scanf("%lf", &salary);
    if(salary<=2000)
    {
        printf("Isento\n");
    }
    else if(salary>2000 && salary<=3000)
    {
        salary-=2000;
        sum=salary*0.08;
        printf("R$ %.2lf\n", sum);
    }
    else if(salary>3000 && salary<=4500)
    {
        salary-=3000;
        sum=80+salary*0.18;
        printf("R$ %.2lf\n", sum);
    }
    else if(salary>4500)
    {
        salary-=4500;
        sum=350+salary*0.28;
        printf("R$ %.2lf\n", sum);
    }
}
