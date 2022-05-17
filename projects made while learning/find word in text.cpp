#include <stdio.h>
int main()
{
	char word[20],sntc[100];
	int a=0,o=0,i=0,kontrol=0,lngtw=0,lngts=0;
	printf("bir metin girin:");
	gets(sntc);
	printf("metin icinde aranacak kelimeyi girin:");
	scanf("%s",word);
	while(word[lngtw]!='\0')
	{
		lngtw++;
	}
	while(sntc[lngts]!='\0')
	{
		lngts++;
	}
	for(i;i<lngts-lngtw+1;i++){
		char test[20];
		for(int j=0;j<lngtw;j++){
		test[j]=sntc[i+j];
		}
//		puts(test);
		kontrol=0;
		o=0;
		while(word[o]!='\0'){
			if(test[o]!=word[o]){
				kontrol=1;
				break;
			}
			o++;
		}
		if(kontrol==0)
		{
		printf("%s kelimesi %d.indexte baslayip %d.indexte bitiyor\n",word,i+1,lngtw+i);
		a++;
		}
	}
	if(a==0)
	printf("kelime metinde bulunmuyor.");
		
	return 0;
}
