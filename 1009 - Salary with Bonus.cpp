#include <stdio.h>
#include <string.h>
main()
{
    char em[100];
    double salary,bonus;
    scanf("%s", &em);
    scanf("%lf %lf", &salary, &bonus);
    double TOTAL=salary+bonus*.15;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
}