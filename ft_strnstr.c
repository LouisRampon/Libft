/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:45:54 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:32 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;
	size_t len;

	i = 0;
	len = ft_strlen(little);
	if (!len)
		return ((char *)big);
	while (big[i] && i < size)
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (j == len)
				return ((char *)&little[j - len]);
			j++;
		}
		i++;
	}
	return (0);
}
