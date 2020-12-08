#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int car,mxspeed,carspeed,c=0;
        scanf("%d",&car);
        for(int i=0; i<car;i++)
        {
            scanf("%d",&carspeed);
            if(i==0)
            {
                c=1;
                mxspeed=carspeed;
            }
            else
                if(mxspeed>=carspeed)
            {
                c++;
                mxspeed=carspeed;
            }
        }
        printf("%d\n",c);
    }
}
