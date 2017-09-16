#include <stdio.h>
main()
{
    int am,amm;
    scanf("%d", &am);
    amm=am;
    int note100=amm/100;
    amm%=100;
    int note50=amm/50;
    amm%=50;
    int note20=amm/20;
    amm%=20;
    int note10=amm/10;
    amm%=10;
    int note5=amm/5;
    amm%=5;
    int note2=amm/2;
    amm%=2;
    printf("%d\n",am);
    printf("%d nota(s) de R$ 100,00\n", note100);
    printf("%d nota(s) de R$ 50,00\n", note50);
    printf("%d nota(s) de R$ 20,00\n", note20);
    printf("%d nota(s) de R$ 10,00\n", note10);
    printf("%d nota(s) de R$ 5,00\n", note5);
    printf("%d nota(s) de R$ 2,00\n", note2);
    printf("%d nota(s) de R$ 1,00\n", amm);
}