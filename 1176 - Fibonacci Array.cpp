#include <stdio.h>
#include <math.h>
long long dp[65];
long long fib(long long n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if (dp[n] != -1)
        return dp[n];

    return dp[n]= fib(n-1)+fib(n-2);
}
int main()
{
    int T,N;
    scanf("%d", &T);
    int i;
    for(i=0;i<=60;i++)
        dp[i] = -1;// riyal

    while(T-- && scanf("%d", &N))
    {
        printf("Fib(%d) = %lld\n",N, fib(N));
    }
    return 0;
}