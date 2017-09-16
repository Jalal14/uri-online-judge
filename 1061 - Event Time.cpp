#include <stdlib.h>
#include <stdio.h>

int strlen(char *p)
{
    while (*p) {
        return 1 + strlen(p+1);
    }
    return 0;
}

int main()
{
    int pos=0,daypos=0;
    int array[6];
    int day[2];
    unsigned int j;
    for (j=0; j<2 ; j++)
    {
        char a[78];
        gets(a);
        int i=0,d=0;

        while (i< strlen(a)) {
        while (a[i] >= '0' && a[i] <= '9')
        {
            d = d*10 + (a[i++])-'0';
        }
        if (d)
            break;
        i++;
    }
    gets(a);
    day[daypos++]=d;
    i=0;d=0;
    while (i< strlen(a)) {
        d=0;
        while (a[i] >= '0' && a[i] <= '9')
        {
            d = d*10 + (a[i++])-'0';
        }
        if (d){
            array[pos++] = d;
        }
        i++;
    }

    }



    int ansinSec = array[3]*3600 + array[4]*60 + array[5] + (day[1] - day[0] - 1)*86400 + (86400 - (array[0]*3600 + array[1]*60 + array[2]));

    printf("%d dia(s)\n", ansinSec/86400 ); ansinSec %= 86400;
    printf("%d hora(s)\n", ansinSec/3600); ansinSec %= 3600;
    printf("%d minuto(s)\n", ansinSec/60); ansinSec %= 60;
    printf("%d segundo(s)\n", ansinSec);


    return 0;
}