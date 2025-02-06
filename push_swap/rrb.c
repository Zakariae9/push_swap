#include "push_swap.h"

void	rrb(st_stack **head, int print)
{
	pop_then_push(head, head, 'p', 'l');
	if (print)
		ft_printf("rrb\n");
}
