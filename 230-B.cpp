#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005

long long p_mark[MAX];

void prime()
{
    p_mark[0]=p_mark[1]=1;
    for(long int j=4;j<MAX;j+=2)
        p_mark[j]=1;
    long int limit = sqrt(MAX+1);
    for(long int j=3;j<MAX;j+=2)
    {
        if(!p_mark[j])
        {
            if(j<=limit)
            {
                for(long long k=j*j;k<MAX;k+=j*2)
                {
                    p_mark[k]=1;
                }
            }
        }
    }
}

int num_check(long long int n)
{
    double sq = sqrt(n);
    if(sq == int(sq))
        return 1;
    else return 0;
}

int main()
{
    prime();
    long int n;
    long long num;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        scanf("%lld",&num);
        if(num_check(num)==1 && p_mark[(int)sqrt(num)]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
