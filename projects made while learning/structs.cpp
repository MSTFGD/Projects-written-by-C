#include <stdio.h>
#include <string.h>
struct isci{
	char ad[20];
	char soyad[20];
	int yas;
	double yovmiye;	
}a;
void yazdir(struct isci a)
{
	printf("iscinin adini, soyadini yasini ve maasini sirayla yaziniz:");
	scanf("%s %s %d %d",&a.ad,&a.soyad,&a.yas,&a.yovmiye);
	printf("iscinin bilgileri; adi:%s %s \nyasi:%d \nmaasi: %d",a.ad,a.soyad,a.yas,a.yovmiye);
}
int main()
{
	yazdir(a);
	return 0;
}
