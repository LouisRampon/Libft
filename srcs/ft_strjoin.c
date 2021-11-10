/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:40:05 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/04 11:00:24 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strs_len(char **strs, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

int	ft_concat_sep(int k, char *str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		str[k] = sep[i];
		i++;
		k++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc(ft_strs_len(strs, size) + ft_strlen(sep) * size + 1);
	if (!str)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < size - 1)
			k = ft_concat_sep(k, str, sep);
		i++;
	}
	str[k] = '\0';
	return (str);
}
