#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[210];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]=='.'){
            cout<<0;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i+=2;
        }

    }
}
