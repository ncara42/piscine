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
