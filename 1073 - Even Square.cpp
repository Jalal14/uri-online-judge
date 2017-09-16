#include <stdio.h>
main()
{
    int N,i,sum=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            sum=i*i;
            printf("%d^2 = %d\n", i,sum);
        }
    }
}