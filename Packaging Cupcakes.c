#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int cupcake;
        scanf("%d",&cupcake);
        printf("%d\n",cupcake/2+1);
    }
    return 0;
}
