#include <stdio.h>
int main()
{
    int N,X,Y,i;
    double res=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &X,&Y);
        if(!Y)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", X/(double)Y);
        }
    }
    return 0;
}