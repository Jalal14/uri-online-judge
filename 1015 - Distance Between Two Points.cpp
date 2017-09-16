#include <stdio.h>
main()
{
    int x1,y1;
    int x2,y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    double Distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4lf\n", Distance);
}
