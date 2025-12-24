/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:00:16 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/01 19:05:49 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 10;
//	b = 2;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d %d\n", a, b);
//	return (0);
//}
