#include<stdio.h>
#include<string.h>
int main()
{
    char st[200];
    int a,b=0;
    scanf("%s",st);
    a=strlen(st);
    while(b<a)
    {
        if(st[b-1]!=st[b])
        {
            printf("%c",st[b]);
        }
        b++;
    }


return 0;

}
