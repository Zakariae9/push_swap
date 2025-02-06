#include "push_swap.h"


void	rra(st_stack **head, int print)
{
	pop_then_push(head, head, 'p', 'l');
	if (print)
		write(1, "rra\n", 4);
}
