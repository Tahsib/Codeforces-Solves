#include <stdio.h>
#include <math.h>

int main()
{
    long long int  num, dec_val = 0, base = 1, rem,count,sum=0,k=0;

    scanf("%I64d", &num);
    while (num > 0)
    {
        rem = num % 10;
        dec_val = dec_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }

    while(count<dec_val)
    {
        count = pow(4, k);
        k++;
    }
    printf("%I64d",k-1);


}
