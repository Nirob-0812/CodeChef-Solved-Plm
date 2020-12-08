#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    if(n%4==0)
        sum=n+1;
    else
        sum=n-1;
    printf("%d\n",sum);
    return 0;
}
