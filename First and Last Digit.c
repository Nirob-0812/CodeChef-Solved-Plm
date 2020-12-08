#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,x,y,sum;
        scanf("%d",&n);
        x=n;
        y=n%10;
        while(x>=10)
        {
            x=x/10;
        }
        sum=x+y;
        printf("%d\n",sum);
    }
     return 0;
}
