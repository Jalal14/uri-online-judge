#include <stdio.h>
#include <math.h>
int min(int a,int b)
{
    return a<b ? a:b;
}
int max(int a,int b)
{
    return a>b ? a:b;
}
int main()
{
    int M,N,i;
    do{
        int sum=0;
        scanf("%d %d", &M, &N);
        if(M<=0 || N<=0)
        {
            return 0;
        }
        for(i=min(M,N); i<=max(M,N); i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        printf("Sum=%d\n", sum);

    }
    while(M>0 && N>0);
    return 0;
}