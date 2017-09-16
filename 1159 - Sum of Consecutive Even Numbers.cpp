#include <stdio.h>
int sum(int X)
{
    int i,res=0;
    for(i=1; i<=5; i++)
    {
        res+=X;
        X+=2;
    }
    return res;
}
int main()
{
    int X,i;
    while(scanf("%d", &X) && X)
    {
        X%2 ? printf("%d\n", sum(X+1)):printf("%d\n", sum(X));
    }
    return 0;
}