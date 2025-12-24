/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:52:21 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/01 18:59:53 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a = 10;
//	int	b = 2;
//	int	div, mod;
//
//	ft_div_mod(a, b, &div, &mod);
//	printf("%d %d\n", div, mod);
//	return (0);
//}
