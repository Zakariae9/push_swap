/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:15 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:08:03 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_list(t_stack **head)
{
	int		rank;
	t_stack	*current;
	t_stack	*temp;

	current = *head;
	while (current != NULL)
	{
		rank = 0;
		temp = *head;
		while (temp != NULL)
		{
			if (current->data > temp->data)
				rank++;
			temp = temp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}

void	pb_while_a_more3(t_stack **a, t_stack **b)
{
	int	len;

	len = length_stack(*a);
	rank_list(a);
	while (len > 3)
	{
		if ((*a)->rank < (len / 2))
		{
			pb(b, a, 1);
			rank_list(a);
		}
		else
			ra(a, 1);
		len = length_stack(*a);
	}
	sort_3elements(a);
}

int	min_max_num_in_a(t_stack *a, t_stack *b)
{
	int	min_max;

	min_max = INT_MAX;
	if (!is_there_biggest(a, b->data))
		return (min_num_at_stack(a));
	while (a)
	{
		if (b->data < a->data && min_max > a->data)
			min_max = a->data;
		a = a->next;
	}
	return (min_max);
}

int	larger_num_at_stack(t_stack *head)
{
	int	larger;

	larger = head->data;
	while (head)
	{
		if (larger < head->data)
			larger = head->data;
		head = head->next;
	}
	return (larger);
}

void	turck_algo(t_stack **a, t_stack **b)
{
	pb_while_a_more3(a, b);
	while (*b)
	{
		reset_me(a, b);
		set_pos_all_elementes(a, b);
		set_target_node(*a, *b);
		set_cost(*a, b);
		all_process_to_pa(a, b, set_less_cost(b));
	}
	indexing_list(a);
	check_if_sorted(a, min_num_at_stack(*a));
}
