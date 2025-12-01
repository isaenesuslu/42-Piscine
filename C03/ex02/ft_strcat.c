/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:14:19 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/22 08:33:13 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	destlen(char *dest2)
{
	int	i;

	i = 0;
	while (dest2[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	z;

	z = 0;
	i = destlen(dest);
	while (src[z] != '\0')
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
