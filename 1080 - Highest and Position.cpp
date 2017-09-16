#include <stdio.h>
main()
{
    int i,ar[100];
    for(i=0; i<100; i++)
    {
        scanf("%d", &ar[i]);
    }
    int mxm=ar[0],pos=0;
    for(i=0; i<100; i++)
    {
        if(ar[i]>mxm)
        {
            mxm=ar[i];
            pos=i;
        }
    }
    printf("%d\n", mxm);
    printf("%d\n", pos+1);
}
