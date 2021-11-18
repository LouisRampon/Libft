#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!dest || !s || !f)
		return (0);
	while (s[i])
	{
		dest[i] = (f)(i, s[i]);
		if (!s[i])
			return (0);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

