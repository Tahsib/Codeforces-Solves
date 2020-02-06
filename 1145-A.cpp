#include<bits/stdc++.h>
using namespace std;

int large_len=0;

void thanos_sort(int a[], int start, int n){
    int ct=0;
    for(int i=start; i<n; i++){
        if(a[i] > a[i+1]){
            int diff = n-start+1;
            int half = diff/2;
            thanos_sort(a, start, (start+half)-1);
            thanos_sort(a, (start+half), n);
            break;
        }
        else{
            ct++;
        }
    }
    if(ct==(n-start)){
        if(ct+1>large_len)
            large_len = ++ct;

    }

}

int main()
{
    freopen("1145-A.txt","r",stdin);
    int n;
    cin>>n;
    int a[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    thanos_sort(a,1,n);
    cout<<large_len;
}
