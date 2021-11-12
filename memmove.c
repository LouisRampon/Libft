
#include "libft.h"

void *ft_memmove(void *dest, const void * src, size_t size)
{
	unsigned char *str;

	str = (unsigned char*)malloc(sizeof(*str) * size);
	if (!str)
		return (0);
	ft_memcpy(str, src, size);
	ft_memcpy(dest, str, size);
	free(str);
	return (dest);
}
