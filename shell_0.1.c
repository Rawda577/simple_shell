#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This is a simple shell program that reads input from the user
 * and echoes it back. It continues to do so until the program is terminated.
 *
 * Return: 0 on successful termination
 */

int main(void)
{
	char *buffer;
	size_t bufsize = 32;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	while (1)
	{
		printf("#cisfun$ ");
		getline(&buffer, &bufsize, stdin);
		printf("%s", buffer);
	}

	free(buffer);
	return (0);
}

