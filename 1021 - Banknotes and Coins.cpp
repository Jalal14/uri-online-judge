#include <stdio.h>
main()
{
    double N;
    scanf("%lf", &N);
    int x=N;
    int n100=x/100;
    x%=100;
    int n50=x/50;
    x%=50;
    int n20=x/20;
    x%=20;
    int n10=x/10;
    x%=10;
    int n5=x/5;
    x%=5;
    int n2=x/2;
    x%=2;
    int n1=x;
    N-=n100*100+n50*50+n20*20+n10*10+n5*5+n2*2+n1;
    int y=N*100;
    int c50=y/50;
    y%=50;
    int c25=y/25;
    y%=25;
    int c10=y/10;
    y%=10;
    int c5=y/5;
    y%=5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", y);
}
