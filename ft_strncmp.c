/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:36:21 by lorampon          #+#    #+#             */
/*   Updated: 2021/12/01 12:01:01 by lorampon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;
	int		a;

	i = 0;
	while (i < length && (s1[i] || s2[i]))
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			a = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (a);
		}
		i++;
	}
	return (0);
}
