#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// rasgele say� se�en program

main()
{
	int sayi=0;
	srand(time(NULL));
	sayi=5+rand()%100; // 5 den ba�l�yor 105, 105 dahil de�il
	//sayi=3+rand()%5;  "3 den ba�l�yor 3 4 5 6 7
	printf("%d \n",sayi);
	getch();
	
	
}
