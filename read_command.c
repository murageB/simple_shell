#include "shell.h"
/**
 * read_command - reads command passed
 * @cmd: char array to store command passed
 * @par: pointer to array that storesparameters passed
 * Return: cmd[] and *par[]
 */

void read_command(char cmd[], char *par[])
{

char line[1024];
int count = 0, i = 0, j;
char *array[100], *pch;

for (;;) /* read one line */
{
int c = fgetc(stdin);
line[count++] = (char)c;
if (c == '\n')
break;
}
if (count == 1)
return;
pch = strtok(line, " \n");

while (pch != NULL) /* parse the line into words */
{
array[i++] = strdup(pch);
pch = strtok(NULL, " \n");
}
strcpy(cmd, array[0]); /* first word is the command */

for (j = 0; j < i; j++) /* others are parameteres */
{
par[j] = array[j];
par[i] = NULL; /* NULL-terminate the parameter list */
}
}
