void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = x;
		i++;
	}
}
