/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:40:28 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/05 13:03:43 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strstr(char *src, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (!*to_find)
		return (src);
	i = 0;
	while (src[i])
	{
		j = i;
		k = 0;
		while (src[j] && to_find[k] && src[j] == to_find[k])
		{
			j++;
			k++;
		}
		if (!to_find[k])
			return (src + i);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char	src[] = "Bienvenido";
//	char	to_find[] = "ven";
//	char	*r = ft_strstr(src, to_find);
//	if (r)
//		printf("%s\n", r);
//	else
//		printf("KO");
//	return (0);
//}
