#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char b[1000];
    char a[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *c;
    int i=0,j,k=0;

    scanf("%[^\n]s",b);
    c=strtok(b," ");

    while(c!=NULL)
    {
        for(j=0;j<11;j++)
            if(strcmp(c,a[j]))
                k++;
        if(k==11||i==0)
            printf("%c",toupper(c[0]));
            c=strtok(NULL," ");
            i++, k=0;
    }

    return 0;
}
