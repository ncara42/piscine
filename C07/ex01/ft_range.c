#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
