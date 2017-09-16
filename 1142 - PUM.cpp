#include <stdio.h>
int main()
{
    int N,i;
    scanf("%d", &N);
    for(i=1; i<=4*N; i++)
    {
        !(i%4) ? printf("PUM\n"):printf("%d ",i);
    }
    return 0;
}