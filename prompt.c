#include <stdio.h>
#include <stdlib>
#include <string.h>

#define MAX_COMMAND_LEN 200

void display prompt()
{
	printf("$ ");
}
int main()
{
	char command[MAX_COMMAND_LEN];

	while (1)
	{
		display_prompt();

		if (fgets(command,sizeof(command), stdin) == NULL)
		{
			if (eof(stdin))
			{
				printf("exiting the shell......\n");
				break;
			} else {
				perror("there is an error");
				continue;
			}
		}

		command[strcspn(command, "\n")] '\O';

	        if (strlen(command) == 0
			{
			continue;

			}

			pid_t = fork();


			if (pid< 0)
			{
			perror("exit failure");
			exit(exit failure);
			}

			else if (pid == 0)
			{

			execlp(command,command, NULL);
			

		perror("error");
		exit(exit_failure);
			} else 
			{
				int status;
				waitpid(pid, &status, 0);

				if (WIFEXITED(status))
				{
					int exit_status = WEXITSTATUS(status);
					if (exit_status ! = 0)
					{
						printf("not found command,'%s'\n");
					}
				}
			}
	}

	return 0;
	}

}
