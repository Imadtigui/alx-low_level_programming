#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int length = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j ))
			{
				length++;
				j = 0;
				i++;
			}
			else
				j++;
		}
		break;
	}
	return (length)
}

