#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c,T;
    char s[1001];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",&s);
       int len=strlen(s);
        if(len%2==0)
            n=len/2;
        else
            n=len/2+1;
            c=0;
            i=0;
            while(i<len/2)
            {
                j=n;
                while(j<len)
                {
                    if(s[i]==s[j])
                    {
                        c++;
                        s[j]=0;
                        break;
                    }
                    j++;
                }
                i++;
            }
            if(c==len/2)
                printf("YES\n");
            else
                printf("NO\n");
    }
    return 0;
}
