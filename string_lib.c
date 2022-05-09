#include "main.h"

void display_prompt()
{
    write(STDERR_FILENO, "$ ", 2);
}

void display_newline()
{
    write(STDERR_FILENO, "'\n", 1);
}
