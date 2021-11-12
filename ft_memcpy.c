
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;
	unsigned char *temp1;
	unsigned char *temp2;

	i = 0;
	temp1 = (unsigned char*)src;
	temp2 = (unsigned char*)dest;
	while (i < size)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return (dest);
}
