#include <stdio.h>
main()
{
    int N,i;
    scanf("%d", &N);
    double x,y,z;
    for(i=1; i<=N; i++)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        double avg=(x*2+y*3+z*5)/(2+3+5);
        printf("%.1lf\n",avg);
    }
}
