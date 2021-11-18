
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = (void*)malloc(count *size)))
		return (0);
	ft_bzero(ptr, count);
	return (ptr);
}
