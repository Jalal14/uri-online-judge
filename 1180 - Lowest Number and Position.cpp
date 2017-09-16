#include <stdio.h>
#define SIZE 1005
int main()
{
    int N,X[SIZE],min,pos=0,i;
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &X[i]);
    }
    min=X[0];
    for(i=1; i<N; i++)
    {
        if(X[i]<min)
        {
            min=X[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}