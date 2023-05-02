#include <stdio.h>


int print_title_screen()
{
	printf("#############################\n");
	printf("##                         ##\n");
	printf("##       DinoRun           ##\n");
	printf("##          v.0.1          ##\n");
	printf("##                         ##\n");
	printf("##                         ##\n");
	printf("##     1.Game Start        ##\n");
	printf("##     2.How to Play       ##\n");
	printf("##     3.Exit Game         ##\n");
	printf("##                         ##\n");
	printf("##                         ##\n");
	printf("#############################\n");

 	return 0;
}
 int how_to_play()
 {
     
	printf("#############################\n");
	printf("##                         ##\n");
	printf("##                         ##\n");
	printf("##     TO avoid Enemy      ##\n");
	printf("##                         ##\n");
	printf("##      Press Space        ##\n");
	printf("##      You can jump       ##\n");
	printf("##                         ##\n");
	printf("##    Return to Menu?      ##\n");
	printf("##     (1:yes/2:no)        ##\n");
	printf("##                         ##\n");
	printf("#############################\n");
	
	return 0;
 }
int main()
{
	int input = 0;
	print_title_screen();
	printf("input>");
	scanf("%d", &input);
	if(input = 2)
	{
		how_to_play();
		int input2 = 3;
		scanf("%d", &input2);
		if(input2 = 1)
		{
			print_title_screen();
		}
		while(input2)
		{
			scanf("%d", &input2);
		}
	}
	else if(input = 3)
	{
		return 0;
	}
        	
	return 0;
}




