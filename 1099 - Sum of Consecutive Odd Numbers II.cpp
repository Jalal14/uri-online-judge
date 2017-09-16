#include <stdio.h>
int main()
{
    int N,X,Y,i;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d", &X, &Y);
        int sum=0,j=0;
        if(X<=Y)
        {
            for(j=X+1; j<Y; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
        }
        else
        {
            for(j=Y+1; j<X; j++)
            {
                if(j%2!=0)
                {
                    sum+=j;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
