#include <stdio.h>
int main()
{
    int N,X,i,sum;
    scanf("%d", &N);
    while(N-- && scanf("%d", &X))
    {
        sum=0;
        for(i=1; i<=X/2; i++)
        {
            if(!(X%i))
            {
               sum+=i;
            }
        }
        sum==X ? printf("%d eh perfeito\n", X):printf("%d nao eh perfeito\n", X);
    }
    return 0;
}