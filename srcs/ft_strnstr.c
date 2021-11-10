/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:45:54 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/04 14:29:02 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(little);
	if (!len)
		return (big);
	while (big[i] && i < size)
	{
		j = 0;
		while (big[i] == little[j])
		{
			if (j == len)
				return (&little[j - len]);
			j++;
		}
		i++;
	}
	return (0);
}
