#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2,sayi3,sayi4,sayi5;
   printf("1.say�y� girin   :");
   scanf("%d",&sayi1);
      printf("2.say�y� girin   :");
   scanf("%d",&sayi2);
      printf("3.say�y� girin   :");
   scanf("%d",&sayi3);
      printf("4.say�y� girin   :");
   scanf("%d",&sayi4);
      printf("5.say�y� girin   :");
   scanf("%d",&sayi5);
   
if(sayi1>sayi2&&sayi1>sayi3&&sayi1>sayi4&&sayi1>sayi5)
printf("girdi�iniz say�lar�n en b�y��� %d",sayi1);


else if(sayi2>sayi1&&sayi2>sayi3&&sayi2>sayi4&&sayi2>sayi5)
printf("girdi�iniz say�lar�n en b�y��� %d",sayi2);

else if(sayi3>sayi1&&sayi3>sayi2&&sayi3>sayi4&&sayi3>sayi5)
printf("girdi�iniz say�lar�n en b�y��� %d",sayi3);

else if(sayi4>sayi1&&sayi4>sayi2&&sayi4>sayi3&&sayi4>sayi5)
printf("girdi�iniz say�lar�n en b�y��� %d",sayi4);

else if(sayi5>sayi1&&sayi5>sayi2&&sayi5>sayi3&&sayi5>sayi4)
printf("girdi�iniz say�lar�n en b�y��� %d",sayi5);

else
printf("yanl�� giri� yapt�n�z");



  
  
  
     
		
    	
    	
    
	
    getch();
	
}
