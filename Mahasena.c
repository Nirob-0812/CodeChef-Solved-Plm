#include<stdio.h>
int main()
{
    int n,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
        }
        else
            s++;
    }
        if(c>s)
        printf("READY FOR BATTLE\n");
        else if(c<s)
         printf("NOT READY\n");
        else
        printf("NOT READY\n");
    return 0;
}
