#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,countDigit=0,countNine=0;
    cin>>t;
    long long int a,b,c;
    unsigned long long int f;

    while(t--){
        cin>>a>>b;
        countDigit=0,countNine=0;
        c = b;
        while(c){
            countDigit++;
            c/=10;
        }
        c = b;
        while(c){
            d=c%10;
            if(d==9)
                countNine++;
            c/=10;
        }

        if(countDigit==countNine){
            f = a*countDigit;
        }
        else{
            f = a*(countDigit-1);
        }
        cout<<f<<"\n";

    }
}
