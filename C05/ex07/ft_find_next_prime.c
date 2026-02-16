int	ft_find_next_prime(int nb)
{
	int	i;
	int	prim;

	i = 2;
	prim = nb;
	if (nb < 2)
		return (2);
	while (prim)
	{
		i = 2;
		while (i * i <= prim)
		{
			if (prim % i == 0)
				break ;
			i++;
		}
		if (i * i > prim)
			return (prim);
		prim++;
	}
	return (prim);
}
