#include <stdio.h>
int main()
{
    int age,sum=0,i=0;
    double avg;
    while(scanf("%d", &age) && age>=0)
    {
        sum+=age;
        i++;
    }
    printf("%.2lf\n", sum/(double)i);
    return 0;
}