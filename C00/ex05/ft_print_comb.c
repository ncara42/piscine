/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:16:47 by ncaravac          #+#    #+#             */
/*   Updated: 2025/10/30 12:04:42 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	char	ch;

	ch = c + '0';
	write(1, &ch, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
