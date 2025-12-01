/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:18:35 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/17 17:16:02 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	z;
	int	swap;
	int	smallest;

	i = 0;
	z = 0;
	while (i <= (size - 1))
	{
		smallest = tab[i]
		while (z <= (size - 1))
		{
			if (tab[z] < smallest)
				smallest = tab[z];
			z++;
		}
	}	
}
