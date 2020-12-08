#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long int num1,num2,n1,n2,rem,gcd,lcm;
        scanf("%ld%ld",&num1,&num2);
        n1=num1;
        n2=num2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=(num1*num2)/gcd;
        printf("%ld %ld",gcd,lcm);
        printf("\n");
    }
    return 0;
}
