#include "main.h"

void get_input_line()
{
    int get_line;
    size_t len = 0;
    char *line_ptr = NULL;

    do
    {
        // display_prompt();
        putchar('$');
        get_line = getline(&line_ptr, &len, stdin);
        printf("%s", line_ptr);

    } while (line_ptr != EOF);

    free(line_ptr);
}

int main()
{
    get_input_line();
}