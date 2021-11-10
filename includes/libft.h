/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:38:48 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/04 14:38:29 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(char *str);
char			**ft_split(char *str, char *charset);
char			*ft_strdup(char *src);
char			*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strlen(char *str);
int				ft_toupper(char c);
int				ft_tolower(char c);
char			*ft_strchr(char *str, int c);
char			*ft_strrchr(char *str, int c);
char			*ft_strnstr(char *big, char *little, int size);
void			ft_bzero(void *str, int n);
void			*ft_memset(void *ptr, int value, int size);

#endif
