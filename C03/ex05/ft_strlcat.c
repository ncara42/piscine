/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:06:33 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/04 20:19:59 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d_len;
	unsigned int	s_len;

	s = 0;
	d_len = 0;
	s_len = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (size == 0)
		return (s_len);
	if (size <= d_len)
		return (size + s_len);
	while (s < size - d_len - 1 && src[s])
	{
		dest[d_len + s] = src[s];
		s++;
	}
	dest[d_len + s] = '\0';
	return (d_len + s_len);
}

//int	main(void)
//{
//	char	dest[50] = "Holacalyuyt";
//	char	src[] = "califragilisticoespialidoso";
//	unsigned int	size;
//	unsigned int	r;
//
//	size = 10;
//	r = ft_strlcat(dest, src, size);
//	printf("%s\n", dest);
//	printf("%d\n", r);
//	return (0);
//}
