/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:08:43 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/07 14:31:23 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base, int len_base)
{
	int	j;
	int	i;

	i = 0;
	len_base--;
	while (i < len_base)
	{
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(int len_base, char *base)
{
	int	i;

	i = 0;
	if (len_base == 1 || len_base == 0)
		return (0);
	while (i < len_base)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (!check(base, len_base))
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	if (!is_valid(len_base, base))
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / len_base), base);
		ft_putchar(base[-(nbr % len_base)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len_base)
		ft_putnbr_base(nbr / len_base, base);
	ft_putchar(base[nbr % len_base]);
}

//int	main(void)
//{
//	//char	hex[] = "0123456789abcdef";
//	//char	bin[] = "01";
//	char	dec[] = "0123456789";
//	//char	pon[] = "poniguay";
//	ft_putnbr_base(2183648, dec);
//	ft_putchar('\n');
//	return (0);
//}
