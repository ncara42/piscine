int	ft_atoi(char *str)
{
	int	e;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	e = 0;
	while (str[e] == ' ' || (str[e] >= 9 && str[e] <= 13))
		e++;
	while (str[e] == '-' || str[e] == '+')
	{
		if (str[e] == '-')
			sign *= -1;
		e++;
	}
	while (str[e] >= '0' && str[e] <= '9')
	{
		result = result * 10 + (str[e] - '0');
		e++;
	}
	return (result * sign);
}
