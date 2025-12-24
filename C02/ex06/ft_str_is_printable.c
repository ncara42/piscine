/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:18:53 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:13:34 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	char	*str;
//	int		r;
//	
//	str = "HOLA";
//	r = ft_str_is_printable(str);
//	printf("%d\n", r);
//	return (0);
//}
