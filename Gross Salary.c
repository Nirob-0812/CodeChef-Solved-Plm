#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double s;
        double h,d,sum;
        scanf("%lf",&s);
        if(s<1500)
        {
            h=((s*10)/100);
            d=((s*90)/100);
            sum=s+h+d;
        }
        else
        {
            h=500;
            d=((s*98)/100);
            sum=s+h+d;
        }
        printf("%0.2lf",sum);
    }
}
