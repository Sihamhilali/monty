#include "monty.h"

void    push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;

    new = mlloc(sizeof(stack_t));
    new->n = line_number;
    new->next = NULL;
    new->prev = (*stack);
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    new->next = *stack;
    *stack = new;
}
