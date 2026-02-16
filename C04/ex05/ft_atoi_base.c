int	ft_strlen(char *base)
{
	int	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	return (len_base);
}

int	ft_digit_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(int len_base, char *base)
{
	int	i;
	int	j;

	if (len_base < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '-') || (base[i] == '+')
			|| (base[i] == ' ') || (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base [i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	skip_spaces(char *str, int *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	len_base;
	int	digit;

	len_base = ft_strlen(base);
	result = 0;
	sign = 1;
	if (!check_base(len_base, base))
		return (0);
	i = skip_spaces(str, &sign);
	digit = ft_digit_in_base(str[i], base);
	while (digit != -1)
	{
		result = result * len_base + digit;
		i++;
		digit = ft_digit_in_base(str[i], base);
	}
	return (result * sign);
}
