#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int i=0,c=0,str,f=0;
    char w[102];
    scanf("%s",w);
    str = strlen(w);

    while(w[i]!='\0')
    {
        if(w[i]>='A'&& w[i]<='Z') c++;
        i++;
    }
    if(w[0]>='a' && w[0]<='z') f++;

    i=0;
    if(f==1 && c==(str-1))
    {
        while(w[i]!='\0')
        {
            if(i==0) w[i]=toupper(w[i]);
            else w[i]=tolower(w[i]);
            i++;
        }
    }
    else if(c==str)
    while(w[i]!='\0')
    {
        w[i]=tolower(w[i]);
        i++;
    }

    printf("%s",w);
    return 0;
}
