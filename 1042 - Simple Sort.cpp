#include <stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int mnm,mdl,mxm;
    if(a<b)
    {
        if(a<c)
        {
            mnm=a;
            if(b<c)
            {
                mdl=b;
                mxm=c;
            }
            else
            {
                mdl=c;
                mxm=b;
            }
        }
        else
        {
            mnm=c;
            if(a<b)
            {
                mdl=a;
                mxm=b;
            }
            else
            {
                mdl=b;
                mxm=a;
            }
        }
    }
    else
    {
        if(b<c)
        {
            mnm=b;
            {
                if(a<c)
                {
                    mdl=a;
                    mxm=c;
                }
                else
                {
                    mdl=c;
                    mxm=a;
                }
            }
        }
        else
        {
            mnm=c;
            if(a<b)
            {
                mdl=a;
                mxm=b;
            }
            else
            {
                mdl=b;
                mxm=a;
            }
        }
    }
    printf("%d\n%d\n%d\n",mnm,mdl,mxm);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
