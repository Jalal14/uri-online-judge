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
    int X,Y,i;
    scanf("%d %d", &X, &Y);
    for(i=min(X,Y)+1; i<max(X,Y); i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}