#include<stdio.h>

int main()
{
    int i,c,d=0,j=1,one=0,two=0,three=0,four=0;
    long int n,ans;

    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",c);
        if(c==1)
            one++;
        else if(c==2)
            two++;
        else if(c==3)
            three++;
        else if (c==4)
            four++;
    }
    d+=four;
    if(three>=one){
        d+=three;
        if(two%2==0)
            d+=two/2
        else
            d+=(two/2)+1
    }
    else{
        d+=three;
        one = one-three;

    }

    printf("%d",j);
    return 0;
}
