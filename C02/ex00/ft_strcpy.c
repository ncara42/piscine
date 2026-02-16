char	*ft_strcpy(char *dest, char *src)
{
	char	*d;
	int		i;

	d = dest;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d);
}
