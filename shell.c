#include "main.h"

char *get_and_split_input(input *user_inputs)
{
    register int get_line;
    size_t len = 0;
    char *line_ptr = NULL;
    int length;

    user_input->args = NULL;
    
    do
    {
        display_prompt();
        get_line = getline(user_input->args, &len, stdin);
        printf("%s\n", *user_input->args);

        
    } while (get_line != EOF);

    free(user_input);

    return (*user_input->args);
}

void split_string(char *line_ptr)
{
    char *cmd ;
    int j = 0;
    char input_list;
    char *string_split;

    int length = strlen(line_ptr);

    string_split = malloc(length * sizeof(char));

    cmd = strtok(line_ptr, " ");

    while( cmd != NULL )
    {
        printf( " %s\n", cmd); //printing each token
        cmd = strtok(NULL, " ");

    }

}


void linked_list_to_array(input *user_input)
{
    char **array_list = NULL;
    linked_list *temp = user_input->env;
	size_t length = 0;
    register int i = 0;

    length = list_length(user_input->env);
    array_list = malloc(sizeof(char *) * (length +1));

    if (!array_list)
    {
        perror("Malloc failed\n");
        exit(1);
    };
    while(temp)
    {
        array_list[i] = _strdup(temp->strings);
        temp = temp->next;
        i++;

    }
    array_list[i] = NULL;
    user_input->array_list = array_list;

}


