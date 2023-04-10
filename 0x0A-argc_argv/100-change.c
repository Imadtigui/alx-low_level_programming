#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: para
 * @argv: para
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cent, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 0)
			{
				printf("0\n");
			}
			else
			{
				cent = atoi(argv[i]) / 25;
				cent = cent + (atoi(argv[i]) % 25) / 10;
				cent = cent + (atoi(argv[i]) % 10) / 5;
				cent = cent + (atoi(argv[i]) % 5) / 2;
				cent = cent + (atoi(argv[i]) % 2) / 1;
			}
			 printf("%d\n", cent);
		}
	}
	return (0);
}
