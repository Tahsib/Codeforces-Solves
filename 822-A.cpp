#include<bits/stdc++.h>
using namespace std;

long long int factorial(long int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}

long int gcd(long int a, long int b){
    if(a%b==0)
        return b;

    return gcd(b,a%b);
}

int main()
{
    long int a,b;
    cin>>a>>b;
    long long int c,d;
    c = factorial(a);
    d = factorial(b);
    int x = gcd(c,d);
    cout<<x;

}
