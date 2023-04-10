#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
