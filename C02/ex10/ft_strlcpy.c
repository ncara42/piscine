unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lon;
	unsigned int	i;

	lon = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[lon])
		lon++;
	return (lon);
}
