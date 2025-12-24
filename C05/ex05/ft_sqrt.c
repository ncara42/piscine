/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:54:36 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/11 13:21:58 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	int	r;
	r = ft_sqrt(169);
	printf("%d\n", r);
	return (0);
}*/
