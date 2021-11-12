#include "libft.h"
#include <stdio.h>

int	ft_start(const char *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	printf("%d\n", i);
	return (i);
}

int	ft_end(const char *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - i - 1]) && s1[i])
		i++;
	printf("%d\n", (len - i));
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start;
	int	end;
	int	i;

	if (!set[0])
		return (ft_strdup(s1));
	if (!s1[0])
		return (0);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(sizeof(char*) * (end - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
