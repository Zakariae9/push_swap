/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_while_b_full.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:02 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_nodes_up_top(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while ((*b) != cheapest && (*a) != cheapest->target)
		rr(a, b);
	while ((*b) != cheapest)
		rb(b, 1);
	while ((*a) != cheapest->target)
		ra(a, 1);
}

void	make_nodes_down_top(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while ((*b) != cheapest && (*a) != cheapest->target)
		rrr(a, b);
	while ((*b) != cheapest)
		rrb(b, 1);
	while ((*a) != cheapest->target)
		rra(a, 1);
}

void	if_they_both_deff_pos(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while ((*b) != cheapest)
	{
		if (cheapest->is_up)
			rb(b, 1);
		else
			rrb(b, 1);
	}
	while ((*a) != cheapest->target)
	{
		if (cheapest->target->is_up)
			ra(a, 1);
		else
			rra(a, 1);
	}
}

void	all_process_to_pa(t_stack **a, t_stack **b, t_stack *node)
{
	if (node->is_up && node->target->is_up)
		make_nodes_up_top(a, b, node);
	else if (node->is_up == 0 && node->target->is_up == 0)
		make_nodes_down_top(a, b, node);
	else
		if_they_both_deff_pos(a, b, node);
	pa(a, b, 1);
}
