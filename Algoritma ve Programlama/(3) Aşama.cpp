#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int x=0;
	x=12;
	printf("x'in de�eri= %d dir",x);
	getch();
}
