#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("801-B.txt","r",stdin);
   char a[105],b[105],c[105],cnt=0;
   scanf("%s",a);
   scanf("%s",b);
   for(int i=0;i<strlen(a);i++){
        if(a[i]-b[i]<0){
            cout<<-1;
            return 0;
        }
        else if(a[i]>=b[i])
            c[i]=b[i];
        cnt++;
    }
    for(int i=0; i!=cnt;i++)
        cout<<c[i];
}
