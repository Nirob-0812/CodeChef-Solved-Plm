#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int sum=a+b+c;
        if(sum==180)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
