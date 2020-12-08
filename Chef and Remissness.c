#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,mini,maxi;
        scanf("%d%d",&a,&b);
        maxi=a+b;
        if(a<b)
           mini=b;
        else
            mini=a;
        printf("%d  %d\n",mini,maxi);
    }
    return 0;
}
