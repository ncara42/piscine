/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:52:02 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/16 12:40:57 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	size;
	int	i;

	min = 1;
	max = 50;
	size = max - min;
	range = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}

	free(range);
	return (0);
}*/
