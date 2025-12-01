/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:19:45 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/11 16:35:35 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_alphabet;

	last_alphabet = 'z';
	while (last_alphabet >= 'a')
	{
		write(1, &last_alphabet, 1);
		last_alphabet--;
	}
}
