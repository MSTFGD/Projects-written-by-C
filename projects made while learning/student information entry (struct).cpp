#include <stdio.h>
struct ders{
	int ders_kodu;
	int vize;
	int final;
	double fnotu;
};
struct kisi_bilgileri{
	char ad[20];
	char soyad[20];
	int no;
	struct ders dersler[5];
}ogrenciler[3];
int main()
{
	int i=0;
	while(i<3){
		printf("%d. ogrencinin bilgilerini sirasiyla ad, soyad, numara seklinde bilgilerini girin:",i+1);
		scanf("%s %s %d",ogrenciler[i].ad,ogrenciler[i].soyad,&ogrenciler[i].no);
		for(int a=0;a<5;a++){
			printf("ders kodunu girin:");
			scanf("%d",&ogrenciler[i].dersler[a].ders_kodu);
			printf("dersin vize notunu girin:");
			scanf("%d",&ogrenciler[i].dersler[a].vize);
			printf("dersin final notunu giriniz:");
			scanf("%d",&ogrenciler[i].dersler[a].final);
			ogrenciler[i].dersler[a].fnotu=(ogrenciler[i].dersler[a].vize*0.4)+(ogrenciler[i].dersler[a].final*0.6);
			}
		i++;
		}
	for(int j=0;j<3;j++){
		printf("	%d.ogrenci\n",j+1);
		printf("adi:%s %s numarasi: %d \n",ogrenciler[j].ad,ogrenciler[j].soyad,ogrenciler[j].no);
		for(int y=0;y<5;y++){
			printf("ders kodu: %d \n gecme notu: %.2lf\n",ogrenciler[j].dersler[y].ders_kodu,ogrenciler[j].dersler[y].fnotu);
		}
	}
	return 0;
}
