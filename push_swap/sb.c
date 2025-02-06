#include "push_swap.h"

void	sb(st_stack **head, int print)
{
	swap2top_elements(head);
	if (print)
		ft_printf("sb\n");
}