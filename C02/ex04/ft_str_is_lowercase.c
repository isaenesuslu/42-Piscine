int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 122 && str[i] >= 97))
			return (0);
		i++;
	}
	return (1);
}
