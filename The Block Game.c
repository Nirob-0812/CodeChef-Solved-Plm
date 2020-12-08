#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int rem,tem,n;
        int sum=0;
        scanf("%d",&n);
        tem=n;
        while(tem!=0)
        {
            rem=tem%10;
            sum=(sum*10)+rem;
            tem=tem/10;
        }
        if(sum==n)
            printf("wins\n");
            else
            printf("loses\n");
    }
    return 0;
}
