/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:56:56 by lorampon          #+#    #+#             */
/*   Updated: 2021/11/10 13:43:23 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, int n);
int 	ft_isalnum(char c);
int 	ft_isalpha(char c);
int 	ft_isascii(int c);
int 	ft_isdigit(char c);
int 	ft_isprint(char c);
char	*ft_itoa(int n);
void	*ft_memset(void *ptr, int value, int size);\
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_memcpy(void	*dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
char	**ft_split(char *str, char *charset);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest,const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t length);
char		*ft_strnstr(const char *big, const char *little, size_t size);
char		*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void		*ft_calloc(size_t count, size_t size);




#endif
