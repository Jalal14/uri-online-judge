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
int main()
{
    double x,y;
    x=score();
    y=score();
    printf("media = %.2lf\n", (x+y)/2);
    return 0;
}