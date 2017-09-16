#include <stdio.h>
int main()
{
    int a=0,b=1,c,N,i;
    scanf("%d",&N);
    printf("0 1 ");
    for(i=1; i<=N-3; i++)
    {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
    printf("%d\n", a+b);
    return 0;
}