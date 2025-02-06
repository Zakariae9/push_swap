#include "push_swap.h"

void	ra(st_stack **head, int print)
{
	if (!head || !(*head) || !(*head)->next)
		return ;
	pop_then_push(head, head, 'r', 'f');
	if (print)
		write(1, "ra\n", 3);
}
