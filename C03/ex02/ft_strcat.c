/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:33:07 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/04 17:40:44 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[i])
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[50] = "Hola";
//	char	src[] = "mundo";
//	ft_strcat(dest, src);
//	int	i;
//
//	i = 0;
//	while (dest[i])
//	{
//		write(1, &dest[i], 1);
//		i++;
//	}
//	write(1, "\n", 1);
//	return (0);
//}
