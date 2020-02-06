#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("785-A.txt","r",stdin);
    string str;
    long int n,c=0;
    cin>>n;

    for(long int i=0;i<n;i++)
    {
        cin>>str;
        if(str == "Tetrahedron")c+=4;
        else if(str == "Cube" )c+=6;
        else if(str == "Octahedron" )c+=8;
        else if(str == "Dodecahedron" )c+=12;
        else if(str == "Icosahedron") c+=20;
    }
    cout<<c;
}
