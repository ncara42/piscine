/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:53:04 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:30:04 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	str[] = "BieiDGFDsaf34dDSf";
//	int		i;
//
//	i = 0;
//	ft_strlowcase(str);
//	while (str[i])
//	{
//		write(1, &str[i], 1);
//		i++;
//	}
//	return (0);
//}
