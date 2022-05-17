#include <stdio.h>
int asaltest(int a);
int main()
{
	int t=1,a;
	printf("asalligi test edilecek bir sayi girin:");
	scanf("%d",&a);
	t=asaltest(a);
	if(t==0)
	printf("%d asal degildir.",a);
	else
	printf("%d asal bir sayidir.",a);
	return 0;
}
int asaltest(int a)
{
	int kontrol=0;
	if(a==1)
	return 0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		return 0;
		else
		return 1;
	}
}
