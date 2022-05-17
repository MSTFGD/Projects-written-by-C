#include <stdio.h>
#include <conio.h>
int main()
{
	int a,top=0;
	printf ("arkasinda kalan tum cift sayilari toplanacak bir sayi girin:");
	scanf ("%d",&a);
	if (a%2==1)
	a=a-1;
		else a=a;
	for(a;a>0;a=a-2)
	{
		top=a+top;
	}
	printf("sonuc= %d",top);
	getch();
	return 0;
}
