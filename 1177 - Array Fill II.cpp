#include <stdio.h>
#define SIZE 1005
int main()
{
    int T,N[SIZE],i,j;
    scanf("%d", &T);
    for(i=0; i<1000; i+=T)
    {
        for(j=0; j<T; j++)
        {
            N[i+j]=j;
        }
    }
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}