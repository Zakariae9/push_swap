/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:11:47 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/21 16:54:25 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	are_inputs_correct(int ac, char **av, t_stack **head)
{
	char	*s;

	s = join(av);
	if (!is_input_correct(s))
	{
		free(s);
		return (0);
	}
	fill_stack(head, s);
	free(s);
	ac++;
	return (1);
}

void	fill_stack(t_stack **a, char *str)
{
	int		i;
	char	**s_split;

	i = 0;
	s_split = ft_split(str, ' ');
	while (s_split[i])
	{
		add_node_back(a, new_node((int)ft_atoi(s_split[i])));
		i++;
	}
	free_(s_split, rows(s_split));
}

char	*join(char **s)
{
	int (len) = 0;
	int (i) = -1;
	int (j) = 0;
	int (k) = 0;
	while (s[++i])
	{
		j = 0;
		while (s[i][j++])
			len++;
		len++;
	}
	char *(str) = malloc(len + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		j = 0;
		while (s[i][j])
			str[k++] = s[i][j++];
		str[k++] = ' ';
	}
	str[k] = '\0';
	return (str);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac >= 2)
	{
		if (is_there_spacesinrow_or_empty(av + 1) || !are_inputs_correct(ac, av
				+ 1, &a))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		if (!is_list_ordered(a))
			turck_algo(&a, &b);
		free_stack(a);
	}
	return (0);
}
