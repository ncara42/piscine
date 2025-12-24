/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:20:40 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/04 18:06:34 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;	

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[50] = "Hola";
//	char	src[] = "mundo";
//	int		j;
//
//	ft_strncat(dest, src, 3);
//	j = 0;
//	while (dest[j])
//	{
//		write(1, &dest[j], 1);
//		j++;
//	}
//	write(1, "\n", 1);
//	return (0);
//}
