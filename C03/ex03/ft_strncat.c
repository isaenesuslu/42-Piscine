/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:14:19 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/22 13:00:36 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	destlen(char *dest2)
{
	unsigned int	i;

	i = 0;
	while (dest2[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	z;
	unsigned int	i;

	z = 0;
	i = destlen(dest);
	while (src[z] != '\0' && z < nb)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
