#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,fec=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        fec=fec*i;
        printf("%d\n",fec);
    }
    return 0;
}
