#include <conio.h>
#include <stdio.h>
#include <ctype.h>

int vida = 3;
int score = 0;
float h;
int contado=0;
int key;
char key1;
char x = 20;
char y = 10;
float z;
float a;
float j;

int main()
{
	char food= '@';
int fodPos[4];
fodPos[0] = 10;
fodPos[1] = 40;
	char inimigo = '-';
	int map[10];
	map[0] = 0;
	map[1] = 0;
	map[2] = 0;
	map[3] = 13;
	char tile = '-';
	char til = '|';
	textcolor(GREEN);
	gotoxy(30, 0);
	printf("Aperte s\n");
	gotoxy(27, 4);
	textcolor(RED);
	printf("Q para sair");
	textcolor(BLUE);
	gotoxy(20, 20);
	for (int i = 0; i < 100; i++)
	{
		z = z + 1;
		gotoxy(z, 12);
		printf("_");
		gotoxy(0, 10);
	}
	while ((key = getch()) != 'q')
	{
		clrscr();
		for (int i =0; i<20; i++)
		{
		 j = j + 1;
        gotoxy(map[2], map[3]);
        printf("____________________________________________________________");
        gotoxy(map[0], map[1]);
        printf("____________________________________________________________");
        
        }
        gotoxy(20, 20);
        textcolor(LIGHTGREEN);
        printf("Score:%i",score);
        textcolor(WHITE);
        gotoxy(fodPos[1], fodPos[0]);
        printf("%c",food);
        textcolor(BLUE);
         
		gotoxy(0, 15);
		printf("Aperta d para direita, w pra cima, v pra baixo, s pra esquerda");
		gotoxy(x, y);
		int vdd; //one simple animator
	 if (y == map[0])
		{
		
		   while((key == getch())!='w')
		   {
		   	clrscr();
		   
		   	printf("Voce perdeu");
		   }
		}
			 if (y == map[3])
		{
		
		   while((key == getch())!='w')
		   {
		   	clrscr();
		   
		   	printf("Voce perdeu");
		   }
		}
		if (x == fodPos[1])
		{
			
			score = score + 1;
		    contado = 4;
		     if (contado == 4)
		     {
		     	fodPos[0] = fodPos[0] +1000;
		     }
		
		}
		
			
		
		if (vdd == 5)
		{
			printf("<");
		}
		if (vdd == 4)
		{
			printf(">");
		}
		if (vdd == 6)
		{
		
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
			case 'w':
			 vdd = 6;
			 printf("^");
			 y--;
			 break;
			 case 'v':
			  vdd = 7;
			  printf("v");
			  y++;
		}
	}
}
