#include<stdio.h>
int main()
{
    int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{

	   char s;
   	     scanf(" %c",&s);
	    if(s=='b'||s=='B')
	    printf("BattleShip\n");
	     else if(s=='c'||s=='C')
	    printf("Cruiser\n");
	    else if(s=='d'||s=='D')
	    printf("Destroyer\n");
	    else if(s=='f'||s=='F')
	    printf("Frigate\n");

	}
	return 0;
}

