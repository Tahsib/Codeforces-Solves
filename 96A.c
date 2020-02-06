#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,i,n;
    char s[150];
    scanf("%s",s);
    n = strlen(s);

    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
            b=0;
        }
        else
        {
            b++;
            a=0;
        }
        if(a==7||b==7)
            break;

    }
    if(a>=7||b>=7)
        printf("YES");
    else
        printf("NO");

    return 0;

}
