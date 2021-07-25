#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

float h;
int key;
char x = 20;
char y = 10;
float z;
float j;
int main()
{   char tile = '-';
	char til = '|';
textcolor(GREEN);
gotoxy(20, 0);
printf("Aperte uma tecla\n");
gotoxy(23, 4);
textcolor(RED);
printf("Q para sair");
textcolor(BLUE);
gotoxy(20, 20);
for (int i = 0; i < 100; i++)
	{  z = z + 1;
		gotoxy(z,10);
		printf("_");
	}
while ((key = getch())!='q')
{
	
	clrscr();
	 gotoxy(0, 0);
	 printf("Aperta d pra mover a cobra");
	gotoxy(x, y);
	int vdd; //one simple animator
	if(vdd == 5 )
	{
	
	printf("<");
	}
	if (vdd == 4) {
		printf(">");
	}
	switch (key)
	{
		case 'd':
		 x++;
		 vdd = 4;
		 printf(">");
		 break;
		 case 's':
		 vdd = 5;
		 printf("<");
		  x--;
		  break;
	}

	
}
}
