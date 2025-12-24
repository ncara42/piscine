/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:15:06 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/03 17:34:20 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (size < n && src[size])
	{
		dest[size] = src[size];
		size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}

//int	main(void)
//{
//	char	dest[20];
//	char	*src;
//	int		n;
//
//	n = 5;
//	src = "Bienvenid02";
//	ft_strncpy(dest, src, n);
//	printf("%s\n", dest);
//	return (0);
//}
