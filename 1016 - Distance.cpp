#include <stdio.h>
main()
{
    int d;
    double X=60.0;
    double Y=90.0;
    scanf("%d", &d);
    double time=d/(Y-X)*60.0;
    int t=time;
    printf("%d minutos\n", t);
}