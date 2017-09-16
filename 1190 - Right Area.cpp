#include <stdio.h>
int main()
{
    double M[12][12],sum=0;
    int i,j,c=0;
    char O;
    scanf(" %c", &O);
    for(i=0; i<=11; i++)
    {
        for(j=0; j<=11; j++)
        {
            scanf("%lf", &M[i][j]);
            if(i>5)
            {
                if(j>i)
                {
                    sum+=M[i][j];
                }
            }
            else
            {
                if(j>11-i)
                {
                    sum+=M[i][j];
                }
            }
        }
    }
    if(O=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(O=='M')
    {
        printf("%.1lf\n", sum/30);
    }
    return 0;
}