#include<stdio.h>
int main()
{
    char st[4][50];
    char str;
    char stt;
    int i,k=0;
    for(i=0;i<4;i++)
    {
        scanf("%s",st[50]);
    }
    for(i=0;i<4;i++)
    {
        if(k<=strlen(st[i]))
        {
            k=strlen(st[i]);
            putchar(tolower(st));

        }

    }
    printf("%s",st);



return 0;
}
