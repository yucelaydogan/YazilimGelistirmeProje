#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    char harf;
    printf("bir harf giriniz\n");
    scanf("%c",&harf);
    switch(harf)
	{
    	case  'a':
    		printf("a harfine bast�n�z");
    		break;
    		case 'b':
    			printf("b harfine bast�n�z ");
    			break;
    			case 'c':
    				printf(" c harfine bast�n�z");
    				break;
    				default:
    					printf("a,b,c ye basmad�n�z");
	}
	
    
	
    getch();
	
}
