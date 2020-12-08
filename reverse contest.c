#include<stdio.h>
void main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,tem,rem,sum=0;
        scanf("%d",&n);
        tem=n;
        while(tem!=0)
        {
            rem=tem%10;
            sum=(sum*10)+rem;
            tem=tem/10;
        }
        printf("%d\n",sum);
    }
}
