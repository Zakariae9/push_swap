#include "push_swap.h"

void	rb(st_stack **head, int print)
{
	if (!head || !(*head) || !(*head)->next)
		return ;
	pop_then_push(head, head, 'r', 'l');
	if (print)
		ft_printf("rb\n");
}
