#include<stdio.h>
void acronym (char *a);
int main()
{
    char b[100];
    gets(b);
    acronym(b);
}

void acronym(char *a)
{
    int i,j;
    char b[100];
    char *d;

    j=strlen(a);
    for(i=0;i<j;i++)
    {
        if(i==0)
            printf("%c",toupper(a[0]));
        else if((a[i]==' ')&&(a[i]!= 'i','of','the','on','at','for','with','a','an','in','and'))
            printf("%c",toupper(a[i+1]));

    }


}
