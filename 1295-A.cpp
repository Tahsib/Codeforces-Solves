 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
    int t;
    cin>>t;

    while(t--){
        long int d=0;
        long int n,one=0,seven=0;
        cin>>n;
        if(n==3){
            seven=1;
        }
        else if(n%2==0){
            one=n/2;
        }
        else{
           d=n-3;
           one=d/2;
           seven=1;
        }
        if(seven>=1){
            while(seven--){
                cout<<7;
            }
        }
        if(one>=1){
            while(one--){
                cout<<1;
            }
        }
        cout<<endl;
    }
 }
