#include <stdio.h>
int main()
{
    int N;
    while(scanf("%d", &N) && getchar() != EOF)
    {
        switch(N)
        {
        case 0:
            printf("vai ter copa!\n");
            break;
        default:
            printf("vai ter duas!\n");
        }
    }
    return 0;
}