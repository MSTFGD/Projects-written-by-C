#include <stdio.h>
int mutlak(int n,int r)
{
	int z;
	
	return z;
}
int faktoriyel(int a)
{
	int f=a-1;
	for(f;f>0;f--)
	{
		a=a*f;
	}
	return a;
};
float kombinasyon(int n,int r,int z) 
{
	return (float)faktoriyel(n)/(faktoriyel(r)*faktoriyel(z));
}
int main() 
{	
	int sonuc,n,r,z;
	printf("aalooo %d",faktoriyel(0));
	printf("kombinasyonu alinacak sayiyi girin:");
	scanf("%d",&n);
	printf("secim sayisini yaziniz:");
	scanf("%d",&r);
	if(n-r<0)
		z=r-n;
	else
		z=n-r;
	if(r==0)
	{
		printf("\nsonuc: 1");
		return 0;
	}
	printf("\nsonuc : %.2f",kombinasyon(n,r,z));
	return 0;
}
