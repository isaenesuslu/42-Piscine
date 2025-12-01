/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 09:49:21 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/17 14:44:28 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	last_index;

	i = 0;
	while(i < (size / 2))
	{
		swap = tab[i];
		last_index = size - (i + 1);
		tab[i] = tab[last_index];
		tab[last_index] = swap;
		i++;
	}
}
