/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:54 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head, int print)
{
	pop_then_push(head, head, 'p', 'l');
	if (print)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **head, int print)
{
	pop_then_push(head, head, 'p', 'l');
	if (print)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}

void	sa(t_stack **head, int print)
{
	swap2top_elements(head);
	if (print)
		write(1, "sa\n", 3);
}

void	sb(t_stack **head, int print)
{
	swap2top_elements(head);
	if (print)
		write(1, "sb\n", 3);
}
