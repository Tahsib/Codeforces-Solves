#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("100.txt","r",stdin);
    int n;
    cin>>n;
    int *pt;
    pt = new int[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",(pt+i));
    }

    for(int i=0;i<n;i++)
    {
        if(*(pt+i)==1){
            cout<<"HARD";
            break;
        }
        else if(i==(n-1))
            cout<<"EASY";
    }

    delete [] pt;
}
