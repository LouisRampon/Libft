/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:50:33 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/10 12:05:43 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{	
	char	*str;
	int		i;
	long	nb;

	i = (n < 0);
	nb = (n < 0) * -n + (n >= 0) * n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	str = malloc(sizeof(*str) * (i + 1));
	str[i] = '\0';
	nb = (n < 0) * -n + (n >= 0) * n;
	while (nb > 0)
	{
		i--;
		str[i] = nb + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}