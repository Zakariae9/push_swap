/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:58 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	return (head);
}

void	add_node_back(t_stack **head, t_stack *new)
{
	t_stack	*last;

	if (!new || !head)
		return ;
	if (!(*head))
	{
		(*head) = new;
		return ;
	}
	last = last_node(*head);
	last->next = new;
}

void	add_node_front(t_stack **head, t_stack *new_node)
{
	if (!head || !new_node)
		return ;
	new_node->next = *head;
	*head = new_node;
}

t_stack	*new_node(int data)
{
	t_stack	*node;

	node = NULL;
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	node->rank = 0;
	return (node);
}

t_stack	*befor_last_node(t_stack *head)
{
	t_stack	*temp;

	temp = head;
	if (!head || !head->next)
		return (NULL);
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}
