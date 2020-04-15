#include<stdio.h>

int		main(void)
{
	int i;

	printf("Which is the first page you should go?\nPlease put number(1~8) and push enter!\n");
	scanf("%d", &i);
	while (!(i >= 1 && i <= 8))
	{
		printf("Please put number (((1 ~ 8))) and push enter!\n");
		scanf("%d", &i);
	}
	if (i == 1)
		printf("Top Page\n");
	else if (i == 2)
		printf("Japanese Traditional Culture/Kanazawa Travel Guide\n");
	else if (i == 3)
		printf("Castle & Garden/Japanese Traditional Culture/Kanazawa Travel Guide\n");
	else if (i == 4)
		printf("Chaya District/Japanese Traditional Culture/Kanazawa Travel Guide\n");
	else if (i == 5)
		printf("Westernized Culture/Kanazawa Travel Guide\n");
	else if (i == 6)
		printf("Modern Culture/Kanazawa Travel Guide\n");
	else if (i == 7)
		printf("Ohmicho Market/Modern Culture/Kanazawa Travel Guide\n");
	else
		printf("21 Century Museum/Modern Culture/Kanazawa Travel Guide\n");
}
