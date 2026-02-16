#include <stdlib.h>



int	strleng(int size, char **strs, char *sep)
{
	int		len_strs;
	int		total_len;
	int		j;
	int		i;

	len_strs = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len_strs++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	total_len = len_strs + (size - 1) * i;
	return (total_len);
}


void	strcp(char *str, char **strs, int size, char *sep)
{
	int	pos;
	int	i;
	int	j;
	int	k;

	pos = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				str[pos++] = sep[k++];
		}
		i++;
	}
	str[pos] = '\0';
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;

	if (size <= 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	total_len = strleng(size, strs, sep);
	str = (char *)malloc((total_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	strcp(str, strs, size, sep);
	return (str);
}
