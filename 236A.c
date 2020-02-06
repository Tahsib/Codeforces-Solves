#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,len,cnt;

    char a[150];
    scanf("%s",a);
    cnt=len = strlen(a);

    for(i=0;i<len-1;i++)
    {
        n=0;
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                if(n==1)
                {
                    continue;
                }

                else{
                    n++;
                    cnt--;
                }
            }
        }
    }

    if(cnt%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}

