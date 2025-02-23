/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:52 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 13:31:11 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*min_stack(t_stack *head)
{
	t_stack	*min_node;
	int		min;

	min_node = head;
	min = head->data;
	while (head)
	{
		if (min > head->data)
		{
			min = head->data;
			min_node = head;
		}
		head = head->next;
	}
	return (min_node);
}

void	set_target_node(t_stack *a, t_stack *b)
{
	t_stack	*target;
	int		best_match;
	t_stack	*current_a;

	current_a = a;
	while (b)
	{
		a = current_a;
		target = min_stack(a);
		best_match = INT_MAX;
		while (a)
		{
			if (b->data < a->data && a->data < best_match)
			{
				target = a;
				best_match = a->data;
			}
			a = a->next;
		}
		b->target = target;
		b = b->next;
	}
}
