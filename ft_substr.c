#include "libft.h"

char	*ft_substr(char const *s, unsigned  int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	str = malloc(sizeof(*str) * len + 1);
	if (!str)
		return (0);
	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	str[len] = '\0';
	while  (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
