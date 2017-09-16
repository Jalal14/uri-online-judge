#include <stdio.h>
main()
{
    double a;
    int i,c=0;
    for(i=1; i<=6; i++)
    {
        scanf("%lf", &a);
        if(a>0)
        {
            c++;
        }
    }
    printf("%d valores positivos\n", c);
}
