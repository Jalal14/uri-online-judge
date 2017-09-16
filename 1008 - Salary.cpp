#include <stdio.h>
main()
{
    int NUM,hour;
    float credit;
    scanf("%d %d", &NUM, &hour);
    scanf("%f", &credit);
    float SALARY=hour*credit;
    printf("NUMBER = %d\n", NUM);
    printf("SALARY = U$ %.2f\n", SALARY);
}
