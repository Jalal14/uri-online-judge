#include <stdio.h>
int time(int a,int b,double c,double d)
{
    int i,j;
    double s1=(double)a,s2=(double)b;
    for(i=1; i<=100; i++)
    {
        s1+=(int)(s1/100*c);
        s2+=(int)(s2/100*d);
        if((int)s1>(int)s2)
        {
            return i;
        }
    }
    return i;
}
int main()
{
    int T,PA,PB,res;
    double G1,G2;
    scanf("%d", &T);
    while(T-- && scanf("%d %d %lf %lf", &PA,&PB, &G1,&G2))
    {
        res=time(PA,PB,G1,G2);
        res<=100 ? printf("%d anos.\n",res):printf("Mais de 1 seculo.\n");
    }
    return 0;
}