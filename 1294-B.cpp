#include<bits/stdc++.h>
using namespace std;

struct points{
    int x;
    int y;
};

void sortpoints(points st[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(st[j].x > st[j+1].x){

                st[j].x = st[j].x + st[j+1].x;
                st[j+1].x = st[j].x - st[j+1].x;
                st[j].x = st[j].x - st[j+1].x;

                st[j].y = st[j].y + st[j+1].y;
                st[j+1].y = st[j].y - st[j+1].y;
                st[j].y = st[j].y - st[j+1].y;
            }

            if(st[j].x == st[j+1].x){
                if(st[j].y > st[j+1].y){

                    st[j].x = st[j].x + st[j+1].x;
                    st[j+1].x = st[j].x - st[j+1].x;
                    st[j].x = st[j].x - st[j+1].x;

                    st[j].y = st[j].y + st[j+1].y;
                    st[j+1].y = st[j].y - st[j+1].y;
                    st[j].y = st[j].y - st[j+1].y;
                }
            }
        }
    }
}

int main()
{
    freopen("1294-B.txt","r",stdin);
    int t,n,chk;
    cin>>t;
    while(t--){
        int x=0,y=0;
        chk=0;
        string s;
        cin>>n;
        points a[n];
        for(int i=0; i<n; i++){
            cin>>a[i].x>>a[i].y;
        }
        sortpoints(a,n);

        for(int i=0; i<n-1; i++){
            if(a[i].y > a[i+1].y){
                cout<<"NO"<<endl;
                chk=1;
                break;
            }
        }
        if(chk==1)
            continue;

        for(int i=0; i<n; i++){

            if(a[i].x > x){

                for(int k=x; k<a[i].x; k++){
                    s+='R';
                }
                x += (a[i].x-x);
            }

            if(a[i].y > y){

                for(int l=y; l<a[i].y; l++){
                    s+='U';
                }
                y+= (a[i].y-y);
            }
        }

        cout<<"YES\n";
        cout<<s<<endl;

    }

}
