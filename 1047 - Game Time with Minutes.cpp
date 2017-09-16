#include <stdio.h>
main()
{
    int x1,x2,y1,y2;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    int time1=1440-(x1*60+x2);
    int time2=y1*60+y2;
    int time=time1+time2;
    int HORA=time/60;
    int MINUTO=time%60;
    if(HORA>23)
    {
        HORA-=24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HORA, MINUTO);
}
