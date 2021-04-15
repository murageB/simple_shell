#include "murage_shell.h"


int main()
{
	char cmd[100], command[100], *parameters[20];
	/* enviroment variables */
	char *envp[] = {(char *) "PATH=/bin", 0};

	while ( 1 )  /* repeat forever */
	{
		type_prompt();  /* displays prompt on screen */
		read_command( command, parameters);/*read input from terminal */
		if (fork() != 0) /* (instruction to) parent */
			wait (NULL); /* wait for child */
		else
		{
			strcpy (cmd, "/bin/");
			strcat (cmd, command);
			execve (cmd, parameters, envp); /* execute command */
		}
		if (strcmp (command, "exit") == 0)
			break;
	}
	return 0;
}
