/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos_to_nodes_elements.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:22 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing_list(t_stack **head)
{
	t_stack	*helper;
	int		i;

	i = 0;
	helper = *head;
	while (helper != NULL)
	{
		helper->index = i++;
		helper = helper->next;
	}
}

void	indexing_stacks(t_stack **a, t_stack **b)
{
	indexing_list(a);
	indexing_list(b);
}

void	set_up_or_down(t_stack **head)
{
	int		len;
	t_stack	*helper;

	helper = *head;
	len = length_stack(helper) / 2;
	while (helper != NULL)
	{
		if (helper->index < len)
			helper->is_up = 1;
		else
			helper->is_up = 0;
		helper = helper->next;
	}
}

void	set_pos_all_elementes(t_stack **a, t_stack **b)
{
	indexing_stacks(a, b);
	set_up_or_down(a);
	set_up_or_down(b);
}
