#include "main.h"

char get_and_split_input()
{
    int get_line;
    size_t len = 0;
    char *line_ptr = NULL;
    int length;
    
    do
    {
        display_prompt();
        get_line = getline(&line_ptr, &len, stdin);
        printf("%s\n", line_ptr);
        int length = strlen(line_ptr);
        printf("%i", length);
    } while (get_line != EOF);

    free(line_ptr);

    return (*line_ptr);
}

void split_string(char *line_ptr)
{
    char *cmd ;
    int j = 0;
    char input_list;

    cmd = strtok(line_ptr, " ");

    while( cmd != NULL )
    {
        printf( " %s\n", cmd); //printing each token
        cmd = strtok(NULL, " ");
    }

}



int main()
{
    get_and_split_input();
}