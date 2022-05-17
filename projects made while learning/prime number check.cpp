#include <stdio.h>
int main()
{
	int i=2,a,atoplam=0,asayi=0,kontrol=1;
	do
	{
	printf("islem yapilacak sayiyi girin:");
	scanf("%d",&a);
	for(;i<=a/2;i++)
	{
		int kontrol=1;
		if(a%i==0)
		{
			kontrol=0;
			break;
		}
	}
	if(kontrol==1 && a>=0)
	{
	atoplam=atoplam+a;
	asayi+=1;
	}
	}
	while(a>=0);
	printf("asal sayilarin toplami: %d\n",atoplam);
	printf("asal sayilarin ortalamasi: %.2f",(float)atoplam/asayi);
	return 0;
}
