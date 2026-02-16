unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d_len;
	unsigned int	s_len;

	s = 0;
	d_len = 0;
	s_len = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (size == 0)
		return (s_len);
	if (size <= d_len)
		return (size + s_len);
	while (s < size - d_len - 1 && src[s])
	{
		dest[d_len + s] = src[s];
		s++;
	}
	dest[d_len + s] = '\0';
	return (d_len + s_len);
}
