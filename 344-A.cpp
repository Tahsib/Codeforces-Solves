#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,d=1;
    scanf("%ld",&n);

    int *pt = new int [n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",pt+i);
    }
    for(int i=0;i<n-1;i++)
    {
        if( *(pt+i)%2 != *(pt+i+1)%2 )
            d++;
    }
    printf("%ld",d);

}
