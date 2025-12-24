/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:19:34 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:14:24 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	str[] = "Bi8envenidosaA";
//	int		i;
//
//	i = 0;
//	ft_strupcase(str);
//	while (str[i])
//	{
//		write(1, &str[i], 1);
//		i++;
//	}
//	return (0);
//}
