#include "libft.h"

char	*ft_substr(char const *s, unsigned  int start, size_t len)
{
	char *str;

	str = malloc(sizeof(*str) * len + 1);
	if (!str)
		return (0);
	while  (len > 0)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = '\0';
	return (str);
}
