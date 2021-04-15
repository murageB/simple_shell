#ifndef MURAGE_SHELL_H
#define MURAGE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

void type_prompt();
void read_command(char cmd[], char *par[]);


#endif
