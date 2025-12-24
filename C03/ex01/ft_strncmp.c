/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:00:39 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/04 20:32:21 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n && s1[i] && s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//int	main(void)
//{
//	char	s1[] = "Bienvenidos";
//	char	s2[] = "Bienveniyos";
//
//	int r = ft_strncmp(s1, s2, 9);
//	printf("%d\n", r);
//	return (0);
//}
