//TIC TAC GAME .........DATE OF THE PROJECT 30 APRIL 2018.......
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int checking();
void display();
int main()
{
	int player=1,i,n,choice,ch,er=1,p1=0,p2=0,mc=1,dis=1,in=0;
	char con,tic,s1[15],s2[15],e;
	do{                               //This do-while loop is used for multiple number of execution. 
	printf("\n\n\t       WELCOME!");	
	printf("\n\t ____________________");
	printf("\n\t ____________________");
	printf("\n\t|****TIC_TAC_GAME****|\n");
	printf("\t ____________________\n");
	printf("\t ____________________\n");
	printf("\t ********************");
	printf("\n\t   SOHEL RAJA MOLLA.\n\n");
	if(er==1)
	printf("\n        PRESS 'ENTER' TO START.");//It is used because to avoid a special type of error .
	scanf("%c",&e);
	if(er==1)
	{
	printf("\n\n Enter the first player name: ");
	gets(s1);
	}
	if(er==1)
	{
	printf("\n\n Enter the second player name: ");
	gets(s2);
	printf("\n\nMATCH NUMBER : %d\n",mc);
	}
	else
	{
	printf("\n\nMATCH NUMBER : %d\n",mc);
	printf("\nBest of luck -> %s and %s.\n",s1,s2);
	}
	er++;
	printf("\nPLAYER 1 : %s \n\nPLAYER 2 : %s",s1,s2);
	do    //This  do-while loop is used for getting multiple number of display.
	{
		display();
		player=(player%2==1)?1:2;
		dis=player;
		printf("\n%s (PLAYER %d) -> Enter a number: ",(player==1)?s1:s2,player);
		scanf("%d",&choice);
		tic=(player==1)?'X':'O';
		if(choice==1)
		{
			if(box[1]=='X')
			{
				box[1]='X';
				printf("\n\n*Number %d box was filled up all ready.\n**Please choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[1]=='O')
			{
				box[1]='O';
				printf("\n\n*Number %d box was filled up all ready.\n**Please choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[1]=tic;
		}
		else if(choice==2)
		{	
			if(box[2]=='X')
			{
				box[2]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
				
			}
			else if(box[2]=='O')
			{
				box[2]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[2]=tic;
		}
		else if(choice==3)
		{
			if(box[3]=='X')
			{
				box[3]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[3]=='O')
			{
				box[3]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[3]=tic;
		}
		else if(choice==4)
		{
			if(box[4]=='X')
			{
				box[4]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[4]=='O')
			{
				box[4]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[4]=tic;
		}
		else if(choice==5)
		{
			if(box[5]=='X')
			{
				box[5]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[5]=='O')
			{
				box[5]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[5]=tic;
		}
		else if(choice==6)
		{
			if(box[6]=='X')
			{
				box[6]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[6]=='O')
			{
				box[6]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[6]=tic;
		}
		else if(choice==7)
		{
			if(box[7]=='X')
			{
				box[7]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[7]=='O')
			{
				box[7]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[7]=tic;
		}
		else if(choice==8)
		{
			if(box[8]=='X')
			{
				box[8]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[8]=='O')
			{
				box[8]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[8]=tic;
		}
		else if(choice==9)
		{
			if(box[9]=='X')
			{
				box[9]='X';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else if(box[9]=='O')
			{
				box[9]='O';
				printf("\n\nNumber %d box was filled up all ready.\n\nPlease choose another box.\n",choice);
				getch();
				player--;
			}
			else
			box[9]=tic;
		}
		else
		{
			printf("\n**INVALID NUMBER**\n");
			printf("\n**PLEASE TRY AGAIN**\n");
			player--;
			in=1;
			getch();
		}
		i=checking();
		player++;
	//	display();//This function regulate the game result.
		printf("\n\n\tGood Luck!!!!!!!! \n");
		if(i==1)
		{
			--player;
			system("cls");
			system("color f3");
			if(player==1)
			{
			printf("\n\nMatch number %d between %s and %s.\n\nMATCH RESULS:\n",mc++,s1,s2);
			printf("\nPLAYER %d -> %s ->****WIN!****\n\nWHOLE SERIES RESULTS:\n",player,s1);
			if(p1>=p2)
			{
				printf("\n\n%s (PLAYER 1) leads by (%d-%d)\n",s1,++p1,p2);
			}
			else if(p1<p2)
			{
				p1++;
				if(p1<p2)
				printf("\n\n%s (PLAYER 2) leads by (%d-%d)\n",s2,p1,p2);
				else
				printf("\n\nScore level between %s and %s that is (%d-%d).\n",s1,s2,p1,p2);
			}
			}
			else
			{
			printf("\n\nMatch number %d between %s and %s.\n\nMATCH RESULS:\n",mc++,s1,s2);	
			printf("\nPLAYER %d -> %s ->****WIN!****\n\nSERIES RESULTS:\n",player,s2);
			if(p2>=p1)
			{
				printf("\n\n%s (PLAYER 2) leads by (%d-%d)\n",s2,p1,++p2);
			}
			else if(p2<p1)
			{
				p2++;
				if(p2<p1)
				printf("\n\n%s (PLAYER 1) leads by (%d-%d)\n",s1,p1,p2);
				else
				printf("\n\nScore level between %s and %s that is (%d-%d).\n",s1,s2,p1,p2);
			}
			}
			printf("\n______________THE_END______________\n");
		}
		else if(i==0)
		{
			system("cls");
			system("color f6");
			printf("\n\nMatch number %d between %s and %s.\n\nMATCH RESULS:\n",mc++,s1,s2);
			printf("\n********MATCH DRAW********\n\nSERIES RESULTS:\n");
			if(p1>p2)
			printf("\n\n%s (PLAYER 1) leads by (%d-%d)\n",s1,p1,p2);
			else if(p1<p2)
			printf("\n\n%s (PLAYER 2) leads by (%d-%d)\n",s2,p1,p2);
			else
			{
				if(er==2)
				{
				printf("\n\nScoce level that is %s-%d and %s-%d of %d matches.\n",s1,p1,s2,p2,--mc);
				mc++;
				}
				else
				{
				printf("\n\nScoce level that is %s-%d and %s-%d of %d matches.\n",s1,p1,s2,p2,--mc);
				mc++;
				}
			}
			printf("\n______________----THE_END----_______________\n");
		}
		getch();
	}while(i==-1);//When i not equals to -1 ,the loop will terminate for the value of i when 1 and 0.
	if(i!=-1)//For erasing the old value.
	{
		for(n=0;n<10;n++)
		{
			box[n]='0'+n;
		}
	}
	printf("\n\nDo you wants to play another time?\n\nIF YES THEN PRESS : 'y' or 'Y'.\n\n");
	con=getche();//To repeat something.	
}while(con=='y'||con=='Y');
	return 0; 
}
int checking()
	{
		if(box[1]==box[4]&&box[4]==box[7])
		return 1;
		else if(box[2]==box[5]&&box[5]==box[8])
		return 1;
		else if(box[3]==box[6]&&box[6]==box[9])
		return 1;
		else if(box[1]==box[2]&&box[2]==box[3])
		return 1;
		else if(box[4]==box[5]&&box[5]==box[6])
		return 1;
		else if(box[7]==box[8]&&box[8]==box[9])
		return 1;
		else if(box[1]==box[5]&&box[5]==box[9])
		return 1;
		else if(box[3]==box[5]&&box[5]==box[7])
		return 1;
		else if(box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9')
		{
			return 0;
		}
		else
		return -1;
	}
void display()
{
	system("cls");
	system("color f");
	printf("\n\n(PLAYER 1) : 'X'\tand\t(PLAYER 2): 'O'\n");
	printf("\n\t ______________ ");
	printf("\n\t|    |    |    |");
	printf("\n\t| %c  | %c  | %c  |",box[1],box[2],box[3]);
	printf("\n\t|____|____|____|");
	printf("\n\t|    |    |    |");
	printf("\n\t| %c  | %c  | %c  |",box[4],box[5],box[6]);
	printf("\n\t|____|____|____|");	
	printf("\n\t|    |    |    |");
	printf("\n\t| %c  | %c  | %c  |",box[7],box[8],box[9]);
	printf("\n\t|____|____|____|\n");	

}	
