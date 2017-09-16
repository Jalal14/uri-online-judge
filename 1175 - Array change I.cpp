#include <stdio.h>
int main()
{
    int i=19,N[20];
    while(i>=0)
    {
        scanf("%d", &N[i]);
        i--;
    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}