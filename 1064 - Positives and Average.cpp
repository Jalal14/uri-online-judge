#include <stdio.h>
main()
{
    double a,sum=0;
    int i,c=0;
    for(i=1; i<=6; i++)
    {
        scanf("%lf", &a);
        if(a>0)
        {
            c++;
            sum+=a;
        }
    }
    double avg=sum/c;
    printf("%d valores positivos\n", c);
    printf("%.1lf\n", avg);
}