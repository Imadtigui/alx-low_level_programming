#include <stdio.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: para
 * @argv: para
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				for (i = 1; i < argc; i++)
				{
					sum = sum + atoi(argv[i]);
				}
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
				break;
			}
		}
	}
	else
		printf("%d\n", 0);
	return (0);
}

