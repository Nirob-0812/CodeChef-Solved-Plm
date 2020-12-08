#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,rem,tem,sum=0;
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
