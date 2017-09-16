#include <stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int m=(a+b+abs(a-b))/2;
    int res=(m+c+abs(m-c))/2;
    printf("%d eh o maior\n", res);
}
