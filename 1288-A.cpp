#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    long int n,d;
    while(t--){
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<"\n";
        else {
            long int x = 1, j;
            while (x <= n) {
                j = ceil((d / (x + 1.0)))+x;
                if (j <= n) {
                    cout << "YES" << "\n";
                    break;
                }
                x++;
            }
            if(x>n)
                cout << "NO\n";
        }
    }
    return 0;
}
