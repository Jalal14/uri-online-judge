#include <stdio.h>
int main()
{
    double M[12][12],sum=0;
    int i,j,L;
    char ch;
    scanf("%d", &L);
    scanf(" %c", &ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &M[i][j]);
            if(j==L)
            {
                sum+=M[i][j];
            }
        }
    }
    if(ch=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(ch=='M')
    {
        printf("%.1lf\n", sum/12);
    }
    return 0;
}