#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;double sum=0,total=0;
    cin>>n;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        sum = sum + 1.0/(100.0/a);
    }

    total = sum/n * 100.0;
    printf("%lf",total);

}
