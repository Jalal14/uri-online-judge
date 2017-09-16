#include <stdio.h>
main()
{
    int time,speed;
    scanf("%d %d", &time, &speed);
    double res=(time*speed)/12.0;
    printf("%.3lf", res);
}