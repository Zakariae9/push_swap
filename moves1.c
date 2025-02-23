/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:50 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b, int print)
{
	pop_then_push(a, b, 'p', 'f');
	if (print)
		write(1, "pa\n", 3);
}

void	pb(t_stack **b, t_stack **a, int print)
{
	pop_then_push(b, a, 'p', 'f');
	if (print)
		write(1, "pb\n", 3);
}

void	ra(t_stack **head, int print)
{
	if (!head || !(*head) || !(*head)->next)
		return ;
	pop_then_push(head, head, 'r', 'f');
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_stack **head, int print)
{
	if (!head || !(*head) || !(*head)->next)
		return ;
	pop_then_push(head, head, 'r', 'f');
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
