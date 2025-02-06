#include "push_swap.h"

void	pb(st_stack **b, st_stack **a, int print)
{
	pop_then_push(b, a, 'p', 'f');
	if (print)
		ft_printf("pb\n");
}