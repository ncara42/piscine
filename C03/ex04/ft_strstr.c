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
