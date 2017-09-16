#include <stdio.h>
main()
{
    int X, Y;
    double Total;
    scanf("%d %d", &X, &Y);
    if(X==1)
    {
        Total = Y * 4.00;
    }
    else if(X==2)
    {
        Total = Y * 4.50;
    }
    else if(X==3)
    {
        Total = Y * 5.00;
    }
    else if(X==4)
    {
        Total = Y * 2.00;
    }
    else if(X==5)
    {
        Total = Y * 1.50;
    }
    printf("Total: R$ %.2lf\n", Total);
}