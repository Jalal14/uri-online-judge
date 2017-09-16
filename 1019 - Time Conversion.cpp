#include <stdio.h>
main()
{
    int N;
    scanf("%d", &N);
    int hour=N/3600;
    N%=3600;
    int minit=N/60;
    N%=60;
    printf("%d:%d:%d\n",hour,minit,N);
}