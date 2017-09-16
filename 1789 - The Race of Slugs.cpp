#include <stdio.h>
int main()
{
    int L;
    while(scanf("%d", &L) && getchar()!=EOF)
    {
        int slug,max=-1;
        while(L--)
        {
            scanf("%d", &slug);
            if(slug>max)
            {
                max=slug;
            }
        }
        if(max<10)
        {
            printf("1\n");
        }
        else if(max>=10 && max<20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
}