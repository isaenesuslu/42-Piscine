/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:17:26 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/22 12:44:58 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	putlen(char *len)
{
	int	i;

	i = 0;
	while (len[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	y;
	int	findlen;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	findlen = putlen(to_find);
	while (str[i] != '\0')
	{
		z = 0;
		y = i;
		while (z < findlen && str[y] == to_find[z])
		{
			y++;
			z++;
		}
		if (z == findlen)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
