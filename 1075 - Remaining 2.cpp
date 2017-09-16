#include <stdio.h>
main()
{
    int N,i;
    scanf("%d", &N);
    for(i=0; i<=10000; i++)
    {
        if(i%N==0)
        {
            int res=i+2;
            printf("%d\n", res);
        }
    }
}