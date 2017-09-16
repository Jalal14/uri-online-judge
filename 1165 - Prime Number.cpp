#include <stdio.h>
int main()
{
    int N,X,i;
    scanf("%d", &N);
    while(N-- && scanf("%d", &X))
    {
        for(i=2; i<=X/2; i++)
        {
            if(!(X%i))
            {
               break;
            }
        }
        i==(X/2)+1 ? printf("%d eh primo\n", X):printf("%d nao eh primo\n", X);
    }
}