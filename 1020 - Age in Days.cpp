#include <stdio.h>
main()
{
    int days;
    scanf("%d", &days);
    int year=days/365;
    days%=365;
    int months=days/30;
    days%=30;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
}