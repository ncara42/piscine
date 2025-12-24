/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:08:39 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/16 12:41:08 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	i = 0;
	if (!*range)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*range;
	int	ft_return;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 50;
	ft_return = ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < ft_return)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	printf("%d\n", ft_return);
	
	free(range);
	return (0);
}*/
