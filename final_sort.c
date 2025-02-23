/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:08 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	should_up_down(t_stack *head)
{
	int	min;

	min = min_num_at_stack(head);
	while (head->data != min)
		head = head->next;
	return (head->is_up);
}

void	check_if_sorted(t_stack **a, int min)
{
	int	up_or_down;

	set_up_or_down(a);
	up_or_down = should_up_down(*a);
	while ((*a)->data != min)
	{
		if (up_or_down)
			ra(a, 1);
		else
			rra(a, 1);
	}
}

int	min_num_at_stack(t_stack *head)
{
	int	min;

	min = head->data;
	while (head)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}
