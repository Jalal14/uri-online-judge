#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],str3[100];
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,"vertebrado")==0)
    {
        if(strcmp(str2,"ave")==0)
        {
            if(strcmp(str3,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else if(strcmp(str3,"onivoro")==0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(str2,"mamifero")==0)
        {
            if(strcmp(str3,"onivoro")==0)
            {
                printf("homem\n");
            }
            if(strcmp(str3,"herbivoro")==0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(str1,"invertebrado")==0)
    {
        if(strcmp(str2,"inseto")==0)
        {
            if(strcmp(str3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else if(strcmp(str3,"herbivoro")==0)
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp(str2,"anelideo")==0)
        {
            if(strcmp(str3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            if(strcmp(str3,"onivoro")==0)
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
