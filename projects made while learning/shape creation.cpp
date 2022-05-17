#include <stdio.h>
int main()
{
	for(int i=1;i<10;i++)
	{
		if(i<6)
		{
			for(int j=1;j<6;j++)
			{
		
				if(i+j>=6)
					printf("#");
				else
					printf(" ");
			}
		}
			else
			{
				for(int j=1;j<=5;j++)
				{
				if((i==6 && j>1) || (i==7 && j>2) || (i==8 && j>3) || (i==9 && j>4))
					printf("#");
				else
					printf(" ");
				}
			}
		printf("\n");
	}
}
