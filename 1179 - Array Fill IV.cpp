#include <stdio.h>
#define SIZE 20
void print_e(int *a)
{
    int j;
    for(j=0; j<5; j++)
    {
        printf("par[%d] = %d\n",j, a[j]);
    }
}
void print_o(int *b)
{
    int j;
    for(j=0; j<5; j++)
    {
        printf("impar[%d] = %d\n",j, b[j]);
    }
}
int main()
{
    int arr[SIZE];
    int par[5],impar[5];
    int i,even=0,odd=0;
    for(i=0; i<15; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<15; i++)
    {
        if(arr[i]%2==0)
        {
            par[even]=arr[i];
            ++even;
            if(even==5)
            {
                print_e(par);
                even=0;
            }
        }
        else
        {
            impar[odd]=arr[i];
            ++odd;
            if(odd==5)
            {
                print_o(impar);
                odd=0;
            }
        }
    }
    for(i=0; i<odd; i++)
    {
        printf("impar[%d] = %d\n",i, impar[i]);
    }
    for(i=0; i<even; i++)
    {
        printf("par[%d] = %d\n",i, par[i]);
    }
    return 0;
}