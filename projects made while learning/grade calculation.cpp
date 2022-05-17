#include <stdio.h>
#include <conio.h>
int main()
{
	float a,b,son,fin,viz,but;
	printf ("Donem sonu ortalama hesabi icin final ve vize notunuzu girin\n");
	do{
	
	printf ("lutfen 1 ile 100 arasinda degerler girin. \nfinal:");
	scanf("%f",&fin);
	}
	while(fin>100 || fin<0);
	do{
	printf ("vize:");
	scanf("%f",&viz);
		}
	while(viz>100 || viz<0);
	son=(fin*6)/10+(viz*4)/10;
	if(son>=60)
	printf("%.2f notla donemi gectiniz!",son);
	    else {
	        printf("final notu ile hesaplama sonucu notunuz 60'dan kucuk. \n");
	        do{
			printf ("Butunleme notunuzu girin:" );
	        scanf("%f",&but);
	        		}
			while(but>100 || but<0);
	        son=(but*6)/10+(viz*4)/10;
	        if(son>=60)
	        printf("%.2f notuyla donemi gectiniz!",son);
	        else
	        
	        	printf("%.2f notuyla kaldiniz seneye gorusuruz :)",son);
	        	 
	    }
	getch();
	return 0;
}
