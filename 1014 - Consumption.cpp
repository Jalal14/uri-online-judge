#include <stdio.h>
main()
{
    int X;
    float Y;
    scanf("%d %f", &X, &Y);
    float distance=X/Y;
    printf("%.3f km/l\n", distance);
}