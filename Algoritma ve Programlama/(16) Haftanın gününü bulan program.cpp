#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi=0;
    printf("haftan�n g�n say�s�n� giriniz\n");
    scanf("%d",&sayi);
    switch(sayi)
	{
    case 1:
    	printf("Pazartesi");break;
    	case 2:
    		printf("sal�");break;
    			case 3:
    		printf("�ar�amba");break;
    			case 4:
    		printf("per�embe");break;
    			case 5:
    		printf("cuma ");break;
    			case 6:
    		printf("cumartesi");break;
    			case 7:
    		printf("pazar");break;
    		default:
    			printf("yanl�� giri� yapt�n�z");
    			break;
    		
	}
	
    
	
    getch();
	
}
