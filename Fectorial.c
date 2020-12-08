#include<stdio.h>
int main()
{
    long long int Z;
    scanf("%lld",&Z);
    while(Z--)
    {
        long long int N,sum=0;
        scanf("%lld",&N); 
        while(N!=0)
        {
           sum=sum+N/5;
           N=N/5;
        }

    printf("%lld\n",sum);}
    return 0;
}
