#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double h,c,s;
        int grade;
        scanf("%lf%lf%lf",&h,&c,&s);
        if(h>50 && c<0.7 && s>5600)
            grade=10;
        else if(h>50 && c<0.7)
            grade=9;
        else if(c<0.7 && s>5600)
            grade=8;
        else if(h>50 && s>5600)
            grade=7;
        else if( h>50 || c<0.7 || s>5600)
            grade=6;
        else
            grade=5;
        printf("%d\n",grade);
    }
}
