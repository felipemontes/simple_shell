#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

extern char **environ;
char **tokens(char *string);
int _path(char **argv);
char *_which(char *str1, char *str2);
char *_getenv(const char *name);
void _free(char **str);
void _printenv(void);
void handler(int han);
/* string functions */
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
#endif
