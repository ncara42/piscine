/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:54:52 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:08:23 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;
	int		i;

	d = dest;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d);
}

//int	main(void)
//{
//	char	dest[20];
//	char	*src;
//
//	src = "Bienvenido";
//	ft_strcpy(dest, src);
//	printf("%s\n", dest);
//	return (0);
//}
