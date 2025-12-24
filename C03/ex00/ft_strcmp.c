/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:47:33 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/04 20:36:00 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//int	main(void)
//{
//	char	*s1;
//	char	*s2;
//
//	s1 = "Bienve6idos";
//	s2 = "Bienvenidos";
//	int r = ft_strcmp(s1, s2);
//	printf("%d\n", r);
//	return (0);
//}
