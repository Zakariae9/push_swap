/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_fundamenals.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:29 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/18 11:32:51 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2elements(t_stack **head)
{
	if (head && length_stack(*head) == 2)
	{
		if ((*head)->data > (*head)->next->data)
			sa(head, 1);
	}
}

void	sort_3elements(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	if (!head || !(*head) || length_stack(*head) != 3)
		return ;
	first = *head;
	second = first->next;
	third = second->next;
	if (first->data > second->data && first->data > third->data)
		ra(head, 1);
	else if (second->data > first->data && second->data > third->data)
		rra(head, 1);
	if ((*head)->data > (*head)->next->data)
		sa(head, 1);
}
