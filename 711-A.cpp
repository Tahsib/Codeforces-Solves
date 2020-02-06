#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<string>s;
   char ds[10];
   int n,c=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        scanf("%s",ds);
        s.push_back(ds);
   }
   for(int i=0;i<n;i++)
   {
        if(s[i][0]=='O'&& s[i][1]=='O')
        {
            s[i][0]=s[i][1]='+';
            c++;
            break;
        }
        else if(s[i][3]=='O'&& s[i][4]=='O')
        {
            s[i][3]=s[i][4]='+';
            c++;
            break;
        }
   }

   if(c>0)
   {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
   }
   else cout<<"NO";
}
