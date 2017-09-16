#include <stdio.h>
main()
{
    int code1,unit1;
    float price1;
    int code2,unit2;
    float price2;
    scanf("%d %d %f", &code1, &unit1, &price1);
    scanf("%d %d %f", &code2, &unit2, &price2);
    float total=unit1*price1+unit2*price2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
}
