/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:51:57 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 12:19:48 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lon;
	unsigned int	i;

	lon = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[lon])
		lon++;
	return (lon);
}

//int	main(void)
//{
//	unsigned int lon;
//	char		dest[20];
//	char		src[] = "ft_strlcpy";
//	lon = ft_strlcpy(dest, src, 5);
//	printf("%s\n", dest);
//	printf("%d\n", lon);
//	return (0);
//}
