#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int price;
        int note[]={1,2,5,10,50,100,};
        scanf("%d",&price);
        int tem,rem,index=5;
        int count=0;
        while(price!=0)
        {
            if(price>=note[index])  //242
            {
                tem=price/note[index]; //2.42 42/10=4 2/2=1
                count=count+tem;         //2+4
                price=price-(tem*note[index]);  //price=242-200=42
            }
            else
                index--;  //4,3
        }
        printf("%d\n",count);
    }
    return 0;
}
