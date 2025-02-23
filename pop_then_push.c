/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_then_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:05 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// p means push (i use it in push and rra\/) and r rotate^

void	pop_then_push(t_stack **node_fill, t_stack **node_empty, char type,
		char ele)
{
	t_stack	*node;

	node = delete_return_element(node_empty, ele);
	if (node && type == 'p')
		add_node_front(node_fill, node);
	else if (node && type == 'r')
	{
		node->next = NULL;
		add_node_back(node_fill, node);
	}
	else
		return ;
}
