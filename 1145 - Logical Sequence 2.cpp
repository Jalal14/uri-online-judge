#include <stdio.h>
int main()
{
    int X,Y,i,j,num=1;
    scanf("%d %d", &X, &Y);
    for(i=1; i<=Y; i++)
    {
        for(j=1; j<=X; j++)
        {
            if(!(j%X))
            {
                printf("%d\n",num);
            }
            else
            {
                printf("%d ",num);
            }
            if(num==Y)
            {
                return 0;
            }
            num++;
        }
    }
}