#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double quantity,price,mult,dis,sum;
        scanf("%lf%lf",&quantity,&price);
        if(quantity<=1000)
        {
            sum=quantity*price;
        }
        else
        {
            mult=quantity*price;
            dis=mult/10;
            sum=mult-dis;
        }
        printf("%.5lf",sum);
    }

}
