#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,c=0;
    int t;
    cin>>n;
    while(1)
    {
        if((c%2==0) && (n>=2))
        {
            if(n%2==0)
                n = n - n;
            else
                n = n - (n-1);
            t=1;
        }
        else if(((c%2!=0) && (n>=1))||(c==0))
        {
            if(n%2!=0)
                n = n - n;
            else
                n = n - (n-1);
            t=2;
        }
        else{
            if(t==2)cout<<"Ehab";
            else if(t==1)cout<<"Mahmoud";
            break;
        }
        c++;
    }

}
