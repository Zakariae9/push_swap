#include "push_swap.h"

void	sa(st_stack **head, int print)
{
	swap2top_elements(head);
	if (print)
		write(1, "sa\n", 3);
}