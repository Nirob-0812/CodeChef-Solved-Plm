#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,c=0,rem;
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            if(rem==4){
                c++;
                }
            n=n/10;
        }
        printf("%d\n",c);
    }
}
