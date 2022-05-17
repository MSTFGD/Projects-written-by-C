#include <stdio.h>
int main()
{
	char  das[100];
	printf("islem yapilacak metni girin:\n");
	gets(das);
	for(int i=0;das[i]!='\0';i++)
	{
		if(das[i]>96 && das[i]<123)
		das[i]=int(das[i])-32;
		else if(das[i]>64 && das[i]<91)
		das[i]=das[i]+32;
		else continue;
	}
	puts(das);
	return 0; 
}
