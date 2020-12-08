#include<stdio.h>
int main()
{
    int t,n,max,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)   //5 1 3 7
            {
                if(a[i]>a[j])
            {
                    max=a[i];
                    a[i]=a[j];
                    a[j]=max;
            }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==1)
            {
             sum=sum+a[i];
            }
        }
          printf("%d",sum);
    }

}
