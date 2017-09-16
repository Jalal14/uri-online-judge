#include <stdio.h>
int main()
{
    int X,Y;
    while(1)
    {
        scanf("%d %d", &X, &Y);
        if(!X || !Y)
        {
            break;
        }
        if(X>0 && Y>0)
        {
            printf("primeiro\n");
        }
        else if(X>0 && Y<0)
        {
            printf("quarto\n");
        }
        else if(X<0 && Y<0)
        {
            printf("terceiro\n");
        }
        else
        {
            printf("segundo\n");
        }
    }
    return 0;
}