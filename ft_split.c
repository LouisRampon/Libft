/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:32:16 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/18 18:05:01 by lorampon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_string(char *str, char c)
{
	size_t	i;
	size_t tot;

	i = 0;
	tot = 0;
	while(str[i])
	{
		while(str[i] == c && str[i])
			i++;
		if (str[i])
			tot++;
		while (str[i] != c && str[i])
			i++;
	}
	return (tot);
}

size_t ft_size_str(char *str, char c, size_t j)
{
	size_t	i;

	i = 0;
	while (str[j])
	{
		if (str[j] == c)
			return (i);
		i++;
		j++;
	}
	return (i);
}

char	**ft_split(char *str, char c)
{
	char	**strs;
	size_t	i;
	size_t 	j;
	size_t	k;

	i= 0;
	j = 0;
	strs = malloc(sizeof(*strs) * (ft_nb_string(str, c) + 1));
	if (!strs)
		return (0);
	while (i < ft_nb_string(str, c))
	{
		while (str[j] == c && str[j])
			j++;
		strs[i] = malloc(sizeof(**strs) * (ft_size_str(str, c, j) + 1));
		if (!strs[i])
			return (0);
		k = 0;
		while (ft_size_str(str, c, j) && str[j])
			strs[i][k++] = str[j++];
		strs[i][k] = '\0';
		i++;
	}
	strs[i] = 0;
	return (strs);
}

