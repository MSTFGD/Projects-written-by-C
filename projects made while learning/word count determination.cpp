#include <stdio.h>
int main()
{
	char metin[100];
	int counter=0,i=0;
	printf("kelime sayisi belirlenecek bir metin girin:\n");
	gets(metin);
	while(metin[i]!='\0'){
	if(metin[i]==' '){
	counter++;
	}
	i++;
	}
	printf("metindeki kelime sayisi: %d\n",counter+1);
	return 0;
}
