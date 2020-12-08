#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int price;
        scanf("%d",&price);
        int menu[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
        int index=11;
        int count=0;
        while(price!=0)
        {
            if(price<menu[index])
                index--;
        else
        {
            price=price-menu[index];
            count++;
        }
    }
    printf("%d\n",count);

}
}
