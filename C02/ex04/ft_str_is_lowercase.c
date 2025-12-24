/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:18:53 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:12:38 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
//	str = "bienvenidos";
//	r = ft_str_is_lowercase(str);
//	printf("%d\n", r);
//	return (0);
//}
