/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:22:21 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/07 14:28:20 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

int	ft_atoi(char *str)
{
	int	e;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	e = 0;
	while (str[e] == ' ' || (str[e] >= 9 && str[e] <= 13))
		e++;
	while (str[e] == '-' || str[e] == '+')
	{
		if (str[e] == '-')
			sign *= -1;
		e++;
	}
	while (str[e] >= '0' && str[e] <= '9')
	{
		result = result * 10 + (str[e] - '0');
		e++;
	}
	return (result * sign);
}

//int	main(void)
//{
//	char	str[] = "   ---+-+--+++-123abc";
//	int	r;
//
//	r = ft_atoi(str);
//	printf("%d\n", r);
//	return (0);
//}
