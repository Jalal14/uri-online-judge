#include <stdio.h>
main()
{
    int N,i,sum=0;
    scanf("%d", &N);
    for(i=1; i<=10; i++)
    {
        sum=i*N;
        printf("%d x %d = %d\n", i,N,sum);
    }
}
