#include <stdio.h>
int main()
{
    int N,i;
    scanf("%d", &N);
    do
    {
        for(i=1; i<=N; i++)
        {
            i==N ? printf("%d\n", i):printf("%d ",i);
        }
    }while(scanf("%d", &N) && N);
    return 0;
}