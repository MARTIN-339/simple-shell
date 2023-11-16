#include<stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char arg[1024];
	char *ken;
	char *prompt = "(shell) $";

	while (1)
	{
		printf("%s", prompt);
		printf(" welcome to my shell\n");
		printf("enter input from user\n");

		ken = fgets(arg, sizeof(arg), stdin);
		if (ken == NULL)
		{
			printf("exiting my shell .....\n");
			return (-1);
		}
		puts(arg);
	}

	return (0);
}
