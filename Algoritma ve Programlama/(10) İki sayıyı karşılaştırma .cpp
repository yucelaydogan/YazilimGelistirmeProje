#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2;
    printf("birinci sayiyi girin  :");
    scanf("%d",& sayi1);
    printf("ikinci say�y� girin  :");
    scanf("%d",& sayi2);
    if(sayi1 > sayi2)
	
    	printf("birinci say� ikinci say�dan b�y�kt�r");
    	
    	else{
    		printf("ikinci say� daha b�y�kt�r");
		}
	
	
    getch();
	
}
