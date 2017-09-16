#include <stdio.h>
#include <math.h>
int repeat()
{
    int rep;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &rep);
    return rep;
}
int main()
{
    int inter,gremio,choice;
    int goal_i=0,goal_g=0,win_i=0,win_g=0,draw=0,match=0;
    while(1)
    {
        scanf("%d %d", &inter,&gremio);
        ++match;
        if(inter==gremio)
        {
            draw++;
        }
        else
        {
            inter>gremio ? win_i++:win_g++;
        }
        goal_i+=inter;
        goal_g+=gremio;
        if(repeat()==2)
        {
            break;
        }
    }
    printf("%d grenais\n", match);
    printf("Inter:%d\n", win_i);
    printf("Gremio:%d\n", win_g);
    printf("Empates:%d\n", draw);
    if(win_i==win_g)
    {
        printf("Não houve vencedor\n");
    }
    else
    {
        win_i>win_g ? printf("Inter venceu mais\n"):printf("Gremio venceu mais\n");
    }
    return 0;
}