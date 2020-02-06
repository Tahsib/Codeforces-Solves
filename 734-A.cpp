#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,a=0,d=0;
    scanf("%ld",&n);
    char *str;
    str = new char [n];
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(*(str+i)=='A')a++;
        else if(*(str+i)=='D')d++;
    }
    if(a==d) printf("Friendship");
    else if(a>d) printf("Anton");
    else printf("Danik");
}
