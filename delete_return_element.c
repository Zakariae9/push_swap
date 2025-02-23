/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_return_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:03 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 12:05:32 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*delete_return_element(t_stack **head, char element)
{
	t_stack	*temp;

	if (!head || !(*head))
		return (NULL);
	if (element == 'f')
	{
		temp = *head;
		*head = (*head)->next;
	}
	else
	{
		temp = last_node(*head);
		befor_last_node(*head)->next = NULL;
	}
	return (temp);
}
