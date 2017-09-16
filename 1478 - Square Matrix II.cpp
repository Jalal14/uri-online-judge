#include <stdio.h>
int main()
{
    int N,i,j,c;
    while(scanf("%d", &N) && N)
    {
        for(i=0; i<N; i++)
        {
            c=i+1;
            for(j=0; j<N; j++)
            {
                if(i<=j)
                {
                    printf("%3d", c);
                    c++;
                    if(j<N-1)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf("%3d", c);
                    c--;
                    if(j<N-1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}