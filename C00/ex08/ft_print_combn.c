/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:48:01 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/17 19:15:44 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int n, int start, int pos, int *tab)
{
	int	i;

	if (n == pos)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (tab[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	while (start <= 9)
	{
		tab[pos] = start;
		print_comb(n, start + 1, pos + 1, tab);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	print_comb(n, 0, 0, tab);
}
/*
int	main(void)
{
	ft_print_combn(4);
	return (0);
}*/
