#include <stdio.h>
int input()
{
    int p;
    while(1)
    {
        scanf("%d", &p);
        if(p>0 && p<5)
        {
            return p;
        }
    }
}
int main()
{
    int product;
    int alc=0,gas=0,die=0;
    while(1)
    {
        product=input();
        if(product==1)
        {
            alc++;
        }
        else if(product==2)
        {
            gas++;
        }
        else if(product==3)
        {
            die++;
        }
        else if(product==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    return 0;
}