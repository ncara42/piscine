char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (str[j])
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] += 32;
		j++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((!((str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
