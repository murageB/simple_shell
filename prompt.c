#include "murage_shell.h"

void type_prompt()
{
	static int first_time = 1;
	if (first_time) /* clear screen for the first time */
	{
		const char* CLEAR_SCREEN_ANSI = "\033\143";
		write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 13);
		first_time = 0;
	}
	printf("$ "); /* display prompt */
}
