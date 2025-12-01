/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuslu <iuslu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:21:21 by iuslu             #+#    #+#             */
/*   Updated: 2025/11/11 16:23:50 by iuslu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_alphabet;

	first_alphabet = 'a';
	while (first_alphabet <= 'z')
	{
		write(1, &first_alphabet, 1);
		first_alphabet++;
	}
}
