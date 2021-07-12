#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
