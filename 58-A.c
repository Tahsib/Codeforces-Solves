#include<stdio.h>

int main()
{
    int len,i,n,c=0;
    char a[150];
    scanf("%s",a);
    len = strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='h'&& c==0)
        {
            c++;
        }

        else if(a[i]=='e'&& c==1)
        {
            c++;
        }

        else if(a[i]=='l'&& (c==2||c==3))
        {
            c++;
        }

        else if(a[i]=='o'&& c==4)
        {
            c++;
            break;
        }

    }
    if(c==5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
