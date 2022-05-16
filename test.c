#include <stdio.h>
#include <stdlib.h>


void linked_list_to_array(input *user_input)
{
    char array_list;
    linked_list *temp = user_input->env;
	size_t length = 0;
    register int i = 0;

    length = list_length(user_input->env)
    array_list = malloc(sizeof(char *) * (count +1));

    if (!array_list)
    {
        perror("Malloc failed\n");
        exit(1);
    };
    while(tmp)
    {
        array_list[i] = _strdup(tmp->string);
        tmp = tmp->next;
        i++;

    }
    array_list[i] = NULL;
    user_input->array_list = array_list;



}
