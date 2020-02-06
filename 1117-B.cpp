#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1117-B.txt","r",stdin);

    long long int n,m,k,total=0,it;
    cin>>n>>m>>k;
    long long int arr[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);

    it= m/(k+1);
    total = (arr[n-1]*k + arr[n-2])*it;
    if(m%(k+1)!=0){
        long long int ex = m%(k+1);
        total = total + ex*arr[n-1];
    }

    cout<<total;
}
