/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:28:20 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/11 13:53:31 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	prim;

	i = 2;
	prim = nb;
	if (nb < 2)
		return (2);
	while (prim)
	{
		i = 2;
		while (i * i <= prim)
		{
			if (prim % i == 0)
				break ;
			i++;
		}
		if (i * i > prim)
			return (prim);
		prim++;
	}
	return (prim);
}

/*
int	main(void)
{
	int	r;
	r = ft_find_next_prime(62);
	printf("%d\n", r);
	return (0);
}*/
