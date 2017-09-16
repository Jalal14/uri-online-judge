#include <stdio.h>
#include <math.h>

#define  doshomik isDec

int isDec(double d){
    if (floor(d) != ceil(d))
        return 1;
    return 0;
}


int main()
{
    int i,j;
    double I=0.0,J=0.0;


    for(i=0; i<=9; i++)
    {
        J = I + 1.0;
        for(j=i+1; j<=i+3; j++)
        {
            if (!isDec(I) & !isDec(J))printf("I=%d J=%d\n",(int)(I),(int)(J));
            else if (isDec(I) & !isDec(J))printf("I=%.1f J=%d\n",I,(int)(J));
            else if (!isDec(I) & isDec(J))printf("I=%d J=%.1f\n",(int)(I),J);
            else if (isDec(I) & isDec(J))printf("I=%.1f J=%.1f\n",I,J);

            J = J + 1.0;
        }
        I = I + .2;
    }
    for(i=2,j=3;j<=5 ; j++)
    {
        printf("I=%d J=%d\n",i,j);
    }
    return 0;
}