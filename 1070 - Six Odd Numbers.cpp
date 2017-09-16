#include <stdio.h>
main()
{
    int X,i;
    scanf("%d", &X);
    for(i=X; i<=X+11; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
}