
#include "libft.h"

void *ft_memmove(void *dest, const void * src, size_t size)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	if (temp1 > temp2)
		while (i < size)
		{
			temp1[size - 1] = temp2[size - 1];
			size--;
		}
	else
		ft_memcpy(temp1, temp2, size);
	return (dest);
}
