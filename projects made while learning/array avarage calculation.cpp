#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i=0,array[50],toplam,sayia,sayiu,ort;
	srand(time(NULL));
	while(i<50){
		array[i]=rand()%100;
		toplam+=array[i];
		i++;
	}
	ort=toplam/50;
	for(int a=0;a<50;a++){
	if(array[a]<ort)
	      sayia+=1;
	else
	      sayiu+=1;
	}
	int x=1;
	while(x<51)
	{
		printf("%d\t",array[x-1]);
		if(x%5==0)
		printf("\n");
		x++;
	}
	printf("sayilarin ortalamasi; %d \nortalamanin ustundeki sayilarin sayisi: %d \nortalamanin altindaki sayilarin sayisi: %d",ort,sayiu,sayia);
	
	return 0;
}
