#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


typedef struct cmd_node
{
    char strings;
    struct cmd_node *next;
} linked_list;

typedef struct input{
    linked_list *env;
    char **array_list;
    char **args;
    char *buffer;
    char *path;
    char *fullPath;
    char *shellName;
    unsigned int lineCounter;
    int errorStatus;
    
}input;

void display_prompt(void);
void display_newline();


/**
 * string libraries
 */



#endif