#include <stdio.h>
/**
 * main - function
 * @argc: para
 *@argv: para
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1 ; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	printf("%d\n", i - 1);
return (0);
}

