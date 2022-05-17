#include<stdio.h>
#include<math.h>
int basamaklar(int a);
int main()
{
	int a,t;
	printf("basamaklari toplanacak bir sayi girin:");
	scanf("%d",&a);
	t=basamaklar(a);
	printf("%d sayisinin basamaklari toplami: %d",a,t);
	return 0;
}
int basamaklar(int a)
{
	int kalan=0,toplam=0;
	while(a>0)
	{
	kalan=(a%10);
	toplam+=kalan;
	a=a/10;
	printf("a nýn degeri %d\n",a);
	printf("toplam test %d\n",toplam);
	}
	return toplam;
}
