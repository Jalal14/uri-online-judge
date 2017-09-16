#include <stdio.h>
int length()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n)
        {
            return n;
        }
    }
}
int main()
{
    int A,N,i,sum=0,j;
    scanf("%d", &A);
    N=length();
    for(i=A; i<N+A; i++)
    {
        sum+=i;
    }
    printf("%d\n", sum);
}