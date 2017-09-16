#include <stdio.h>
int sum(int X,int Y)
{
    int i,j,res=0;
    for(i=1; i<=Y; i++)
    {
        res+=X;
        X+=2;
    }
    return res;;
}
int main()
{
    int N,X,Y,i,j;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &X, &Y);
        if(!(X%2))
        {
            printf("%d\n", sum(X+1,Y));
        }
        else
        {
            printf("%d\n", sum(X,Y));
        }
    }
    return 0;
}