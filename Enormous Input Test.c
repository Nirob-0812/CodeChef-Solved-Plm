#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);

       if(a[i]%x==0)
            c++;
        }
    printf("%d\n",c);
}
