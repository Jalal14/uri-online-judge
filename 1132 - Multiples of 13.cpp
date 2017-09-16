#include <stdio.h>
int min(int a,int b)
{
    return a<b ? a:b;
}
int max(int a,int b)
{
    return a>b ? a:b;
}
int main()
{
    int X,Y,i,sum=0;
    scanf("%d %d", &X, &Y);
    for(i=min(X,Y); i<=max(X,Y); i++)
    {
        if(i%13!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}