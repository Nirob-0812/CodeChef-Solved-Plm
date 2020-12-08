#include<stdio.h>
int main()
{
    int T,p1=0,p2=0,lead=0,r1,r2,leader,max=0;
    scanf("%d",&T);
    while(T--)
    {

        scanf("%d%d",&r1,&r2);
        p1=p1+r1;
        p2=p2+r2;
        if(p1>p2)
        {
            lead=p1-p2;
            if(lead>max)
            {
                max=lead;
                leader=1;
            }

        }
        else
        {
            lead=p2-p1;
        if(lead>max)
        {
            max=lead;
            leader=2;
        }
        }

    }
    printf("%d %d\n",leader,max);
    return 0;
}
