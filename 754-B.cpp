#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int two, three, five, six, f1=0,f2=0;
    scanf("%ld %ld %ld %ld",&two,&three,&five,&six);
    while(five!=0 && six!=0){
        if(two==0)
            break;
        f1++;
        two--;
        five--;
        six--;
    }
    while(three!=0){
        if(two==0)
            break;
        f2++;
        two--;
        three--;
    }
    long int total = f1 * 256 + f2 * 32;
    cout<<total;
}
