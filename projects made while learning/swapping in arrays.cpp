#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int temp,array1[10],array2[10];
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		array1[i]=rand()%50;
		array2[i]=rand()%50;
		
	}
	printf ("\t1.dizi\t\t2.dizi\n");
	for(int j=0;j<10;j++)
	{
	printf ("\t%d\t\t%d\n",array1[j],array2[j]);	
	}
	for(int a=0;a<9;a+=2){
		temp=array1[a];
		array1[a]=array2[a+1];
		array2[a+1]=temp;
	}
		printf ("\n\t1.dizi\t\t2.dizi\n");
	for(int j=0;j<10;j++)
	{
	printf ("\t%d\t\t%d\n",array1[j],array2[j]);	
	}
	return 0;
}
