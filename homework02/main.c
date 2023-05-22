#include <stdio.h>

int menuscreen()
{
	char screen[3250];	/* 가로 : 64 + 1(개행문자)  세로 50  */

	int i = 0;
	while (i < 3250)
	{
		if (i % 65 == 0)
		{
			screen[i] = '\n';
		}
		else if (i > 1 && i < 65)
		{
			screen[i] = '/';
		}
		else if (3186 < i && i < 3249)
		{
			screen[i] = '/';
		}
		else if ((i + 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else if ((i - 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else if (i == 224)
		{
			screen[i] = 'L';
		}
		else if (i == 225)
		{
			screen[i] = 'I';
		}
		else if (i == 226)
		{
			screen[i] = 'F';
		}
		else if (i == 227)
		{
			screen[i] = 'E';
		}
		else if (i >= 1569 && i <= 1575)
		{
			screen[i] = "1.START"[i - 1569];
		}
		else if (i >= 1634 && i <= 1646)
		{
			screen[i] = "2.HOW TO PLAY"[i - 1634];
		}
		else if (i >= 1699 && i <= 1703)
		{
			screen[i] = "3.END"[i - 1699];
		}
		else
		{
			screen[i] = ' ';
		}

		i = i + 1;
	}

	screen[3250] = '\0';

	printf("%s", screen);

	return 0;

}

int howto()
{
	char screen[3250];	/* 가로 : 64 + 1(개행문자)  세로 50  */

	int i = 0;
	while (i < 3250)
	{
		if (i % 65 == 0)
		{
			screen[i] = '\n';
		}
		else if (i == 224)
		{
			screen[i] = 'H';
		}
		else if (i == 225)
		{
			screen[i] = 'O';
		}
		else if (i == 226)
		{
			screen[i] = 'W';
		}
		else if (i == 227)
		{
			screen[i] = '?';
		}
		else if (i >= 1569 && i <= 1611)
		{
			screen[i] = "If the numbers are the same, deal 20 damage"[i - 1569];
		}
		else if (i >= 1634 && i <= 1680)
		{
			screen[i] = "each and reduce the enemy's health to 0 to win."[i - 1634];
		}
		else if (i > 1 && i < 65)
		{
			screen[i] = '/';
		}
		else if (3186 < i && i < 3249)
		{
			screen[i] = '/';
		}
		else if ((i + 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else if ((i - 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else
		{
			screen[i] = ' ';
		}

		i = i + 1;
	}

	screen[3250] = '\0';

	printf("%s", screen);

	return 0;
}

int reallyend()
{

	char screen[3250];	/* 가로 : 64 + 1(개행문자)  세로 50  */

	int i = 0;

	while (i < 3250)
	{
		if (i % 65 == 0)
		{
			screen[i] = '\n';
		}
		else if (i > 1 && i < 65)
		{
			screen[i] = '/';
		}
		else if (3186 < i && i < 3249)
		{
			screen[i] = '/';
		}
		else if ((i + 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else if ((i - 1) % 65 == 0)
		{
			screen[i] = '/';
		}
		else if (i >= 224 && i <= 232)
		{
			screen[i] = "REALLY???"[i - 224];
		}
		else
		{
			screen[i] = ' ';
		}
		i = i + 1;
	}
	screen[3250] = '\0';

	printf("%s", screen);

	return 0;
}

int main()
{
	int game_state = 1;
	int ht = 0;
	int re = 0;

	while(game_state == 1)
	{
		   menuscreen();
		   printf("input>");
		   scanf("%d", &game_state);
		   while(game_state == 2)
		   {
			   howto();
			   scanf("%d", &ht);
				   if (ht == 2)
				   {
					   game_state = 1;
				   }
				   else
				   {
					   game_state = 2;
				   }
                  }
		   while (game_state == 3)
		   {
			   reallyend();
			   scanf("%d", &re);
			   if (re == 1)
			   {
				   game_state = 0;
			   }
			   else
			   {
				   game_state = 3;
			   }
		   }
	}
	return 0;
}

