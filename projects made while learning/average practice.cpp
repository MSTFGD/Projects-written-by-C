#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	double topge=1,topar=0;
	int a=0,sayi1,sayi2,sayi3,sayi4;
	int cift=0,tek=0;
	
		printf ("1.sayiyi girin:");
		scanf ("%d",&sayi1);
		printf ("2.sayiyi girin:");
		scanf ("%d",&sayi2);
		printf ("3.sayiyi girin:");
		scanf ("%d",&sayi3);
		printf ("4.sayiyi girin:");
		scanf ("%d",&sayi4);
	if(sayi1%2==1)
	{
		tek=tek+1;
		topar=topar+sayi1;
	}
		else{
			topge=topge*sayi1;
			cift=cift+1;}
	if(sayi2%2==1)
	{
		tek=tek+1;
		topar=topar+sayi2;
	}
		else{
			topge=topge*sayi2;
			cift=cift+1;}
	a=a+1;
	if(sayi3%2==1)
	{
		tek=tek+1;
		topar=topar+sayi3;
	}
		else{
			topge=topge*sayi3;
			cift=cift+1;}
	a=a+1;
	if(sayi4%2==1)
	{
		tek=tek+1;
		topar=topar+sayi4;
	}
		else{
			topge=topge*sayi4;
			cift=cift+1;}
	a=a+1;
	if(tek==0)
	tek=1;
	if(cift==0)
	topge=0;
	topar=topar/tek;
	topge=pow(topge,(double)1/cift);
	printf ("cift sayilarin geometrik ortalamasi: %.2f \ntek sayilarin aritmetik ortalamasi: %.2f",topge,topar);
	getch();
	return 0;
}
