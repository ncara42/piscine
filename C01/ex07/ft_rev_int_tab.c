/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:10:40 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/18 12:50:07 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = x;
		i++;
	}
}
/*
int	main(void)
{
	int	n;
	n = 10;
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(tab, n);

	int	j;
	j = 0;
	while (j < n)
	{
		printf("%d ", tab[j]);
		j++;
	}

	return (0);
}*/
