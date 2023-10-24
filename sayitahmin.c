#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("\e[1;1H\e[2J");
	srand(time(NULL));

	int randomNumber = rand() % 100 + 1;
	int input;

	printf("Sayi tahmin oyunu! 1 ile 100 arasinda bir tam sayi yaz!\n");
	scanf("%d",&input);
	
	/* kontroller */


	if(input <= 100 && input > 0)
	{
		if(input == randomNumber)
		{
			printf("Kazandin! Tahmin ettigin sayi %d\n", randomNumber);
			return 0;
		}
		else
		{
			printf("Kaybettin! Tahmin etmen gereken sayi %d idi\n", randomNumber);
			return 0;
		}
	}
	else
	{
		printf("Hatali girdin!\n");
		return 0;
	}

	return 0;
}



