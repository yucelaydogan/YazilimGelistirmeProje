#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
//KLAVYEDEN G�R�LEN B�R SAYI 50 �LE 200 SAYILARI ARASINDAK� SAYILARDAN KA� TANES�NE KALANSIZ B�LD�G�N� EKRANDA G�STEREN PROGRAM 

int sayi=0;
int adet=0;
printf("sayi girin");
scanf("%d",&sayi);
for(int i=50;i<200;i++)
if(i%sayi==0)
adet++;

printf("%d adet say� kalasns�z b�ler",adet);
	



	


	
	
	
	
	
	
	
	
	
	
	
	getch();
	

}
