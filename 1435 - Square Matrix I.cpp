#include <stdio.h>
int main()
{
    int N,i,j,a[100][100];
    while(scanf("%d", &N) && N)
    {
        int c=1,loop_3;
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                a[i][j]=c;
            }
        }
        for(loop_3=1; loop_3<N/2; loop_3++)
        {
            for(i=c; i<N/2; i++)
            {
                for(j=c; j<N-c; j++)
                {
                    ++a[i][j];
                    ++a[N-i-1][j];
                }
            }
            c++;
        }
        if(N%2!=0)
        {
            c=2;
            for(i=N/2; i<=N/2; i++)
            {
                for(j=1; j<=N/2; j++)
                {
                    a[i][j]=c;
                    a[i][N-j-1]=c;
                    c++;
                }
            }
        }
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%3d", a[i][j]);
                if(j<N-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}