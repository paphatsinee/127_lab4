#include<stdio.h>
int main()
{
    char st1[50];
    char st2[50];
    char st3[50];
    char st4[50];
    int i;
    scanf("%s",st1);
    scanf("%s",st2);
    scanf("%s",st3);
    scanf("%s",st4);
    i=strlen(st1);

    if(strlen(st1)>strlen(st2) && strlen(st1)>strlen(st3) && strlen(st1)>strlen(st4))
    {
        printf("%s",st1);
    }
    else if(strlen(st2)>strlen(st1) && strlen(st2)>strlen(st3) && strlen(st2)>strlen(st4))
    {
        printf("%s",st2);
    }
    else if(strlen(st3)>strlen(st2) && strlen(st3)>strlen(st1) && strlen(st3)>strlen(st4))
    {
        printf("%s",st3);
    }
    else if(strlen(st4)>strlen(st2) && strlen(st4)>strlen(st3) && strlen(st4)>strlen(st1))
    {
        printf("%s",st4);
    }



}
