#include "shell.h"

/**
 * main - executes shell
 * @argc: array
 * @argv: pointer to array pointer
 *
 * Return: void
 */

int main(int argc[], char **argv[])
{
char cmd[100], command[100], *parameters[20];
/* enviroment variables */
char *envp[] = {(char *) "PATH=/bin", 0};

while (1)  /* repeat forever */
{
pid_t pid = fork();
type_prompt();  /* displays prompt on screen */
read_command(command, parameters);/*read input from terminal */

if (pid != 0) /* (instruction to) parent */
{
if (execve(cmd, parameters, NULL) == -1)
{
handle_errors();
}
else
	{
wait(NULL); /* wait for child */
else
{
strcpy(cmd, "/bin/");
strcat(cmd, command);
execve(cmd, parameters, envp); /* execute command */
}
if (strcmp(command, "exit") == 0)
break;
}
return (0);
}
