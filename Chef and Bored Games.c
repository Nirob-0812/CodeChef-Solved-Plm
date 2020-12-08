#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,length=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i=i+2)
        {
            length=length+(n-i+1)*(n-i+1);
        }
        printf("%d\n",length);
    }
    return 0;
}
