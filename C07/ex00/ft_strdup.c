/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaravac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:15:11 by ncaravac          #+#    #+#             */
/*   Updated: 2025/11/16 12:40:45 by ncaravac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	src[] =  "Something";
	char	*copy = ft_strdup(src);
	
	if (!copy)
		return (1);
	printf("%s\n", src);
	printf("%s\n", copy);

	free(copy);
	return (0);
}*/
