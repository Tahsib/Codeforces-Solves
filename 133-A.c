#include<stdio.h>

int main()
{
    int i=0,c=0;
    char a[105];
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9') c++;
        i++;
    }

    (c>0) ? printf("YES") : printf("NO");
    return 0;
}
