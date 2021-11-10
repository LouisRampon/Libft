/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:36:21 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/04 11:00:24 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] < s2[i] | s1[i] > s2[i])
		{
			a = s1[i] - s2[i];
			return (a);
		}
		i++;
	}
	return (0);
}
