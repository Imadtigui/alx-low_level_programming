#include <stdio.h>
#include <stdlib.h>
/**
 * main - funct
 * @argv: para
 * @argc: para
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
