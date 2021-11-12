#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	str = malloc(sizeof(*str) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while  (len > 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
