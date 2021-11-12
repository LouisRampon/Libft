
#include <libft.h>

int	memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char *temp1;
	unsigned char *temp2;

	temp1 = (unsigned char *)ptr1;
	temp2 = (unsigned char *)ptr2;
	while (size > 0)
	{
		if (*temp1 == *temp2)
			return (*temp1 - *temp2);
		temp1++;
		temp2++;
		size--;
	}
	return (0);
}

