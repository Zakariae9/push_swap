#include "push_swap.h"

void	pa(st_stack **a, st_stack **b, int print)
{
	pop_then_push(a, b, 'p', 'f');
	if (print)
		write(1, "pa\n", 3);
}