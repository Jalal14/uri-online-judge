#include <stdio.h>
int input_z(int x)
{
    int z;
    while(1)
    {
        scanf("%d", &z);
        if(z>x)
        {
            return z;
        }
    }
}
int main()
{
    int X,Z,sum=0,c=0;
    scanf("%d", &X);
    Z=input_z(X);
    while(sum<=Z)
    {
        sum+=X;
        c++;
        X++;
    }
    printf("%d\n", c);
    return 0;
}