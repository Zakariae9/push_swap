/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:05:44 by zaboumei          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:54 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i] == '0')
		i++;
	while (s2[j] == '0')
		j++;
	while (((unsigned char)s1[i] || (unsigned char)s2[j]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[j])
			return ((unsigned char)s1[i] - (unsigned char)s2[j]);
		i++;
		j++;
	}
	return (0);
}
